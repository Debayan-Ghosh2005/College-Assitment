#include <stdio.h>

int main()
 { 
    int arr[50];
    int i,key,c=0,b,size;  
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the array elements:\n");
    for(i = 0; i < size; i++)
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the elements to search: ");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
    	if(key==arr[i])
    	{
    		c++;
    		b=i+1;
		}
	}
if(c==1)
printf("element Found %d",b);
else
printf("element not Found");
return 0;
}