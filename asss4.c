#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,si,ma,ci;
	printf("Give the input principal ammount,rate of interest and time :- ");
	scanf("%f%f%f",&p,&r,&t);
	si= ((p*t*r)/100)+p;
	ci=(p*(pow(1+(r/100),t)));
	printf("The maturity amount using Simple interest is :- %.2f and using compund interest is :- %.2f",si,ci);
	return 0;
}