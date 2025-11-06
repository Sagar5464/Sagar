#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[50];
	float cgpa;
}s1,s2;
int main()
{
    s1.roll_no=200;
    strcpy(s1.name,"ANUSHA");
    s1.cgpa=10;
    printf("Student1-ID : %d\n",s1.roll_no);
    printf("Student1-cgpa:%f\n",s1.cgpa);
    printf("student1-name:%s\n",s1.name);
    s2.roll_no=461;
    strcpy(s2.name,"hema");
    s2.cgpa=9.9;
    printf("Student2-ID : %d\n",s2.roll_no);
    printf("Student2-cgpa:%f\n",s2.cgpa);
    printf("student2-name:%s\n",s2.name);
    return 0;
}



