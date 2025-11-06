#include<stdio.h>
int main()
{
	char name[20]={'h','e','l','l','o','\0'};
	printf("%d\n",sizeof(name));
	char ch[]={'a','n','u','s','h','a','\0'};
	printf("%d\n",sizeof(ch));
	printf("%s\n",name);
	printf("%s\n",ch);
	char branch[10];
	scanf("%s",branch);
	printf("%s\n",branch);
	return 0;
}
