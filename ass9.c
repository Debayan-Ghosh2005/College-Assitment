 # include<stdio.h>
 # include<math.h>
 int main()
 {
 	int x,a=0;
 	for(x=1;x<=5;x++)
 	 {
 		a+=pow(x,x);
	 }
	printf("The sum of the series - %d",a);
	return 0;	
 }