#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("enter the item name\n");
	scanf("%s",item);
	printf("Item name:");
	for(i=0;item[i]!='\0';i++)
		printf("%c ",item[i]);
	return 0;
}

