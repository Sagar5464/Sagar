#include<stdio.h>
struct student{
	char name[50];
	int marks;
};
int main()
{
	int n,i;
	
	printf("Enter the number of students: ");
	scanf("%d",&n);
	
	struct student students[n];
	
	for( i=0;i<n;i++)
	{
		printf("Enter the name of student %d",i+1);
		scanf("%s",students[i].name);
		printf("enter the marks of %s: ",students[i].name);
		scanf("%d",&students[i].marks);
	}
	
	int total=0;
	for(i=0;i<n;i++)
	{
		total+=students[i].marks;
	}
	
	float average = (float)total/n;
	printf("\nTotal marks:%d\n",total);
	printf("Average marks: %.2f\n",average);
	return 0;
	

}
