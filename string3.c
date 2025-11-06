#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("enter the item name\n");
	scanf("%s",item);
	int len=0;
	for(i=0;item[i]!='\0';i++)
	{
		len++;
	}
		printf("length of the given string %s is:%d\n",item,len);
	return 0;
}

