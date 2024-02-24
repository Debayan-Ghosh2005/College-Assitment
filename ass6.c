#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("Give 1st,2nd and 3rd number:-");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b)?a:c;
	max=(max>c)?max:c;
	min=(a<b)?a:b;
	min=(min<c)?min:c;
	printf("The max value :-%d\nThe main value :-%d",max,min);
	return 0;	
}