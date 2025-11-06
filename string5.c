#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("enter the item name\n");
	gets(item);
	int vcount=0,ccount=0;
	for(i=0;item[i]!='\0';i++)
	{
		if(item[i]=='a' || item[i]=='e' || item[i]=='i' || item[i]=='o' || item[i]=='u')
		vcount++;
		else
		ccount++;
	}
		printf("vowel is : %d\n",vcount);
		printf("consonant is : %d\n",ccount);
	return 0;
}

