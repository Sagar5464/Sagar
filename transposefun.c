#include<stdio.h>
void displaymatrix(int rows,int cols,int matrix[rows][cols]);
void findtranspose(int rows,int cols,int matrix[rows][cols]);
int main()
{
	int rows,cols,i,j;
	scanf("%d%d",&rows,&cols);
	int A[rows][cols];
	printf("enter the %d element\n",(rows*cols));
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("given matrix A is :\n");
	displaymatrix(rows,cols,A);
	findtranspose(rows,cols,A);
	return 0;
}
void displaymatrix(int rows,int cols,int A[rows][cols])
{
    int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
		     printf("%d ",A[i][j]);	
		}
		printf("\n");
	}	
}
void findtranspose(int rows,int cols,int matrix[rows][cols])
{
	int T[cols][rows],i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			T[j][i]=matrix[i][j];
		}
	}
	printf("transpose of a given matrix a is:\n");
	displaymatrix(cols,rows,T);
}
