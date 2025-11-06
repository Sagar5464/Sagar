#include<stdio.h>
int main()
{
	int temp;
	printf("enter temp\n");
	scanf("%d",&temp);
	
	if (temp < 0)
	{
		printf("freezing weather\n");
	}
	else if(temp>=0 && temp<=10)
	{
		printf("very cold weather\n");
	}
	else if (temp>10 && temp<=20)
	{
		printf("cold weather\n");
	}
	else if (temp>20 && temp<=30)
	{
		printf("normal temp\n");
	}
	else if (temp>30 && temp<=40)
	{
		printf("its hot\n");
	}
	else
	{
		printf("T is very hot\n");
	}
	return 0;
}
