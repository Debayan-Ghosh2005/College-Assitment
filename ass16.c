#include <stdio.h>
int main() {
    int i = 0, count = 0;
    char str[100];
    printf("Enter a string:-");
    gets(str);
    while(str[i] != '\0') 
	{
        if (str[i] >= 'a' && str[i] <= 'z') 
		   str[i]=str[i]-32;
            if
			(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
                count++;   
        i++;
    }
    printf("Frequency of vowel : %d\n", count);
    return 0;
}