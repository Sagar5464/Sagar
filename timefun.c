#include<stdio.h>
void wish();
int main()
{
	printf("hello\n");
	wish();
	printf("task completed\n");
}
void wish()
{
	int n;
	scanf("%d",&n);
	printf("AYISHA\n");
	if(n>=1 && n<12)
	{
		printf("good morning sir\n");
	}
	else if(n>=12 && n>16)
	{
		printf("good afternoon sir\n");
	}
	else if(n>=16 && n<24)
	{
		printf("good evening sir\n");
	}
	else
	{
		printf("good night\n");
	}
}
