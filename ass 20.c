#include<stdio.h>
int fact(int);
int main()
{
int n;
float y=0.0;
for(n=1;n<5;n++)
{
y+=1.0/fact(n);
}
printf("y =%0.2f", y);
return 0;
}
int fact(int n)
{
if(n==0|| n==1)
return 1;
else
return (n*fact(n-1));
}
