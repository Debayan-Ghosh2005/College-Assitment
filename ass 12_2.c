#include <stdio.h> 
int main() 
{ 
	int rows,i,j,k; 
    char a=97;
    printf("Give the row no :-");
	scanf("%d",&rows);
	for (i = 0; i < rows; i++)
	{ 
		for (j = 0; j < 2 * i; j++) 
		printf(" ");
		for (   k = 0; k < 2 * (rows - i) - 1; k++)
		printf("%c ", a++); 
		printf("\n"); 
	} 
return 0;	
}