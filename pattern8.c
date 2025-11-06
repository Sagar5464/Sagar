#include<stdio.h>
int main ()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		for(j=n;j>=n;j--)
		{
			if(j>i)
			{
				printf("  ");
			}
			else
			{
		       printf("* ");
		    }
		}
		printf("\n");
		
	}
	return 0;
}
