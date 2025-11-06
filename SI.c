#include<stdio.h>
int main()
{
	int P,T,R;
	float I;
	
	printf("Enter Principle,Time and Rate of Interest\n");
	scanf("%d%d%d",&P,&T,&R);
	
	I=(P*T*R)/100;
	printf("P = %d T = %d R = %d\n",P,T,R);
	printf("Simple Interest = %f",I);
	
	return 0;
}
