#include<stdio.h>
int main()
{
	int R1,R2,R3;
	float avg;
	
	scanf("%d%d%d",&R1,&R2,&R3);
	avg=(R1+R2+R3)/3;
	printf("avg speed is:%.2f\n",avg);
	printf("qualified racers speeds are:\n");
	if (R1>avg);
	{
		printf("%d\n",R1);
	}
	if (R2>avg)
	{
		printf("%d\n",R2);
	}
	if (R3>avg)
	{
		printf("%d\n",R3);
	}
	return 0;
}
