#include<stdio.h> 
#include<stdlib.h>
typedef struct student
{
    int roll;
    char name[100];
    int marks;
}STD;
int main()
{    
    int i,n,max; 
    STD *stu;
    printf("Enter the number of students: ");    
    scanf("%d",&n); 
    fflush(stdin);
    stu=(STD*)calloc(n,sizeof(STD));
    printf("Enter the roll,name and marks of %d students: ",n);
    for(i=0;i<n;i++)
    {
        puts("\n Roll no.:");
        scanf("%d", &stu[i].roll);
        fflush(stdin);
        puts("\n Name");
        scanf(" %s", &stu[i].name);
        fflush(stdin);
        puts("\n Marks");
        scanf("%d", &stu[i].marks);
        fflush(stdin);
    }
     for(i=0;i<n;i++)
    {
        puts(stu[i].name);
    }
    max=stu[0].marks;
    for(i=1;i<n;i++)
    {
        if(stu[i].marks>max)
            max=stu[i].marks;
    }
    puts("\n Highest Marks received by:");
    for(i=0;i<n;i++)
    {
        if(stu[i].marks==max)
        puts(stu[i].name);
    }
  return 0;  
 }