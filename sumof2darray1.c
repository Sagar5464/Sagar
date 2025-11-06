#include<stdio.h>
int main()
{
	int i,j,k,rows1,cols1,rows2,cols2,rows3,cols3;
	scanf("%d%d",&rows1,&cols1);
	scanf("%d%d",&rows2,&cols2);
	int m1[rows1][cols1],m2[rows2][cols2],m3[rows3][cols3];
	printf("Enter the %d Elements for Matrix-A\n",rows1*cols1);
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<cols1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter the %d Elements for Matrix-B\n",rows2*cols2);
	for(i=0;i<rows2;i++)
	{
		for(j=0;j<cols2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<cols1;j++)
		{
			for(k=0;k<cols2;k++)
			m3[i][j]+=m1[i][j]*m2[i][j];
		}
	}
	printf("Matrix-A \n");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<cols1;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
    }
	printf("Matrix-B\n");
	for(i=0;i<rows2;i++)
	{
		for(j=0;j<cols2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
	printf("Matrix-C \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
