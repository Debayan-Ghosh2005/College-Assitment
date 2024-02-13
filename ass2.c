#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	double d;
	printf("Enter the value for int,float,char,double :-");
	scanf("%d %f %c %lf",&a,&b,&c,&d);
	printf("\nint=%d, float=%f, char=%c, double=%lf",a,b,c,d);
	printf("\nAddress of int=%u, float=%u, Char=%u, double=%u ",&a,&b,&c,&d);
	printf("\nSize of int =%d bytes, float=%d bytes, char=%d bytes,double=%d bytes",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
	return 0;
}