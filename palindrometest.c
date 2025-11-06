#include<stdio.h>
int reverse(int);
int main()
{
	int n;
	scanf("%d",&n);
	int rev=reverse(n);
	if(n==rev)
	{
		printf("not a palindrome");
	}
	else
	{
		printf("a palindrome");
	}
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
    printf("reverse :%d\n",sum);
    return 0;
}
