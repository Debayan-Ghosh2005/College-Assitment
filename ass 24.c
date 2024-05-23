#include <stdio.h>
#include <stdlib.h>
int main() 
{
	FILE *profile,
	*myProfile;
	char name[50], age[10], occupation[100],
	location[50];
	profile = fopen("Profile.txt", "w");
	if (profile == NULL) 
	{
		printf("Error opening Profile.txt!\n");
		return 1;
	}
	printf("Enter your name: ");
	fgets(name, sizeof(name), stdin);
	printf("Enter your age: ");
	fgets(age, sizeof(age), stdin);
	printf("Enter your occupation: ");
	fgets(occupation, sizeof(occupation), stdin);
	printf("Enter your location: ");
	fgets(location, sizeof(location), stdin);
	fprintf(profile, "Name: %s", name);
	fprintf(profile, "Age: %s", age);
	fprintf(profile, "Occupation: %s", occupation);
	fprintf(profile, "Location: %s", location);
	fclose(profile);
	profile = fopen("Profile.txt", "r");
	if (profile == NULL) 
	{
		printf("Error opening Profile.txt!\n");
		return 1;
	}
	myProfile = fopen("myProfile.txt", "w");
	if (myProfile == NULL) 
	{
		printf("Error opening myProfile.txt!\n");
		return 1;
	}
	char details[1000];
	while (fgets(details,sizeof(details),profile)!=NULL)
	{
		fputs(details, myProfile);
	}
	fclose(profile);
	fclose(myProfile);
	printf("Profile details copied successfully!\n");
	return 0;
}