#include<stdio.h>
int main()
{
	int a,b;
	printf("Give an integer value for A and B:-");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping the value of A= %d and value of B= %d",a,b);
	return 0;
}