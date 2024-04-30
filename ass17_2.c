#include <stdio.h>
#include <string.h>
int main ()
{
	char str [100];
	int i,len,flag=0;
	printf("Enter a string:-");
    gets(str);
    while(str[i]!='\0')
    {
    	i++;
    	len=i;
	}
    for(i=0;i<len;i++)
    {
    	if(str[i]!=str[len-i-1])
		{
		flag=1;
		break;	
		}    
	}
	if(flag==0)
	printf("\n Given string is a palindrome");
	else
	printf("\n Given string is not  a palindrome");
	return 0;
}