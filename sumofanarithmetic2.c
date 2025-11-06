#include<stdio.h>
int main()
{
	int n,a,l;
	float sn;
	
	printf("enter sum of an arithmetic\n");
	scanf("%d%d%d",&n,&a,&l);
	
	sn=n/2*(a+l);
	printf("%d=n %d=a %d=l\n",n,a,l);
	printf("sum of an arithmetic = %f",sn);
	return 0;
}
