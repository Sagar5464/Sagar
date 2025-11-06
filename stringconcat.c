#include<stdio.h>
int main()
{
	char A[100];
	char B[100];
	char C[100];
	printf("enter the string\n");
	gets(A);
	gets(B);
	int i,j=0;
	for(i=0;A[i]!='\0';i++)
	{
		C[j]=A[i];
		j++;
	}
	C[j]=' ';
	j++;
	for(i=0;B[i]!='\0';i++)
	{
		C[j]=B[i];
		j++;
	}
	C[j]='\0';
	printf("%s",C);
	return 0;
}
