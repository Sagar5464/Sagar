#include<stdio.h>
int main()
{
	char A[100];
	char B[100];
	int len,i,j=0;
	printf("enter the string\n");
	gets(A);
	len=strlen(A);
	printf("length of %s is: %d\n",A,len);
	for(i=len-1;i>=0;i--)
	{
		B[j]=A[i];
		j++;
	}
	B[j]='\0';
	printf("reverse of the %s is : %s\n",A,B);
	return 0;
	
}
