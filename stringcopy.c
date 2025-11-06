#include<stdio.h>
int main()
{
	char A[30];
	char B[30];
	int i;
	printf("enter the string\n");
	gets(A);
	for(i=0;A[i]!='\0';i++)
	{
		B[i]=A[i];
	}
	B[i]='\0';
	printf("given string:%s\n",A);
	printf("copied string:%s\n",B);
	return 0;
	
}
