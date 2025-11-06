#include<stdio.h>
int main()
{
	char str[50];
	char word[20];
	int i,j=0,len=0;
	int count=0;
	printf("enter a string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	
	{
		if(str[i]!=' ')
		{
			count++;
			word[j]=str[i];
			j++;
		}
		else
		{
			word[j]='\0';
			printf("%s-%d\n",word,count);
			j=0;
			count=0;
		}
	}
	word[j]='\0';
	printf("%s-%d",word,count);
	return 0;
}
