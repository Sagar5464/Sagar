#include<stdio.h>
int main ()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i+2)
	{
		for(j=n;j>=1;j--)
		{
			if(j>i)
			   printf("  ");
			else
		       printf("* ");	
		}
		printf("\n");
		
	}
	return 0;
}
