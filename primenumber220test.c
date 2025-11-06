#include<stdio.h>
 int primenumber(int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int prime=primes(x,y);
	return 0;
}
int primes(x,y)
{
	int n,sum=0,rem;
	while(x,y)
	{
		rem=n%10;
		sum=sum*n+rem;
		n=n/10;
	}
	printf("prime number %d",sum);
	return 0;
}
