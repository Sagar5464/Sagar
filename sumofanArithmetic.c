#include<stdio.h>
int main()
{
	int n,a,l,sn;
	scanf("%d%d%d",&n,&a,&l);
	sn=n/2*(a+l);
	
	printf("sum off arithmetic series of first %d elements is %d",n,sn);
	
	return 0;
}
