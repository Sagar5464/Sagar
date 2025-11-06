#include<stdio.h>
int main()
{
	int r;
	float p;
	
	printf("Enter radius\n");
	scanf("%d",&r);
	p=2*3.142*r;
	printf("r = %d\n",r);
	printf("perimeter = %f",p);
	
	
	return 0;
}
