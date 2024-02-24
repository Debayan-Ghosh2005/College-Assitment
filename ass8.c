#include<stdio.h>
int main()
{
	float a,b,c;
	char o;
	printf("Give two number:-");
	scanf("%f %f",&a,&b);
	printf("+,-,*,/");
	scanf(" %c",&o);
    switch(o)
    {
		case'+':
			c=a+b;
			printf("Addition of two number:- %f",c);
			break;
		case'-':
			c=a-b;
			printf("Subtraction of two number:- %f",c);
			break;
		case'*':
			c=a*b;
			printf("Multipication of two number:- %f",c);
			break;
		case'/':
			c=a/b;
			printf("Divison of two number:- %f",c);
			break;
		defalt:
		    printf("wrong Input");
	}
return 0;
	}