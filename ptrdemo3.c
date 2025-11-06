#include<stdio.h>
int main()
{
	int arr[5]={101,202,303,404,505};
	int *ptr,i;
	ptr=&arr[0];
	printf("accessing of array element by using pointer variable\n");
	for(i=0;i<5;i++)
	{
		printf("%u-->%d\n",(ptr+i),*(ptr+i));
	}
	return 0;
}
