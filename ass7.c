#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("Give an input for Quadratic equation (ax^2+bx+c)\n");
	printf("Enter the cofficient of a,b,c :-");
	scanf("%f %f %f",&a,&b,&c);
	d=((b*b)-4*a*c);
	{
	if(d>0)
	   {  r1=(-b+sqrt(d))/2*a;
	      r2=(-b-sqrt(d))/2*a;
	      printf("Two roots are- %f,%f",r1,r2);
	   }
	else if(d==0)
	   {  r1=(-b+sqrt(d))/2*a;
	      printf("Two roots are- %f,%f",r1,r1);
       }
    else
	   printf("Imaginary Roots");
	}
return 0;	
}