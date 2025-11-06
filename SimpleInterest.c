#include<stdio.h>
int main()
{
	int P,T,R;
	float I;
	P=100000;
	T=22;
	R=2;
	I=(P*T*R)/100;
	printf("Principal Amount = %d\n",P);
	printf("Time in Months = %d\n",T);
	printf("Rate of Interest = %d\n",R);
	printf("Simple Interest = %f",I);
	return 0;
}
