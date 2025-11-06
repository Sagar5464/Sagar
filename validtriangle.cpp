#include<stdio.h>
int main()
{
	float a,b,c,sum;
	
	printf("enter the angles of the triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	
	sum=a+b+c;
	if(sum==180)
	{
		printf("it is valid triangle");
	}
	else
	{
		printf("it is not a valid triangle");
	}
	return 0;
}
