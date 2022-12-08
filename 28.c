#include <stdio.h>
 
struct student{
    char    name[30];
    int     roll;
    float   marks;
};
 
int main()
{
    struct student stu[5];
    for (int i = 0; i < 5; ++i)
    {
    	printf("\nEnter details :\n");
	    printf("Name ?:");          gets(stu[i].name);
	    printf("Roll ?:");            scanf("%d",&stu[i].roll);
	    printf("Marks ?:");        scanf("%f",&stu[i].marks);
	     
	    printf("\nEntered detail is:\n");
	    printf("Name: %s\n"   ,stu[i].name);
	    printf("Roll: %d\n"     ,stu[i].roll);
	    printf("Marks: %0.2f\n\n",stu[i].marks);
    }
    
    return 0;
}
