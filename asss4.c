#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,sma,cma;
	printf("Give the input principal ammount,rate of interest and time :- ");
	scanf("%f%f%f",&p,&r,&t);
	sma= ((p*t*r)/100)+p;
	cma=(p*pow(1+(r/100),t));
	printf("The maturity amount using Simple interest is :- %.2f and using compund interest is :- %.2f",sma,cma);
	return 0;
}
