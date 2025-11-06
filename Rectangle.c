#include<stdio.h>
int main()
{
	int L,B,P;
	printf("Enter length and breadth\n");
	scanf("%d%d",&L,&B);
	
	P=2*L+B;
	printf("L = %d B = %d P = %d\n",L,B,P);
	
	return 0;
}
