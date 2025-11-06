#include<stdio.h>
int reverseofthenumber (int);
int main()
{
	int n;
	scanf("%d",&n);
	int reverse=reverseofthenumber(n);
	printf("reverse of the number %d is :%d",n,reverse);
	return 0;
}
int reverse(n)
{
	int rem,sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
}

