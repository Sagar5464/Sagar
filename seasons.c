#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("enter the numbers(1-12)\n",n);
	if (n==3 ||n==4 || n==5)
	{
		printf("summer \n");
	}
	else if (n==6 || n==7|| n==8 ||n==9)
	{
		printf("rainy\n");
	}
	else
	{
		printf("winter\n");
	}
	
	
	return 0;
}
