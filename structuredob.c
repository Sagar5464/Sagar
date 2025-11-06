#include<stdio.h>
#include<string.h>
struct DOB
{
	int dd;
	int mm;
	int yyyy;
};
struct student
{
	int rollno;
	char name[50];
	struct DOB d;
}s1;
int main()
{
	s1.rollno=200;
	strcpy(s1.name,"Anusha");
	s1.d.dd=31;
	s1.d.mm=01;
	s1.d.yyyy=2007;
	printf("rollno=%d\n",s1.rollno);
	printf("name is %s\n",s1.name);
	printf("DOB is %d %d %d",s1.d.dd,s1.d.mm,s1.d.yyyy);
	return 0;
}
