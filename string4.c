#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("enter the item name\n");
	scanf("%s",item);
	int ucount=0,lcount=0,dcount=0,scount=0;
	for(i=0;item[i]!='\0';i++)
	{
		if(item[i]>='A' && item[i]<='Z')
		  ucount++;
		else if(item[i]>='a' && item[i]<='z') 
		lcount++;
		else if(item[i]>='0' && item[i]<='9') 
		dcount++;
		else
		scount++;
	}
		printf("Number of upper case characters:%d\n",ucount);
		printf("Number of lower case characters:%d\n",lcount);
		printf("Number of digits:%d\n",dcount);
		printf("Number of symbols:%d\n",scount);
	return 0;
}

