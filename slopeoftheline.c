#include<stdio.h>
int main()
{
	int x1,x2,y1,y2;
	float m;
	 printf("enter slope of the line two points\n ");
	 scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
	 
	 m=(y2-y1)/(x2-x1);
	 printf("%d=x1,%d=x2,%d=y1,%d=y2\n",x1,x2,y1,y2);
	 printf("slope of the line two points=%f",m);
	 return 0;
}
