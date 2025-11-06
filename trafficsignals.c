#include<stdio.h>
int main()
{
	char color_code;
	scanf("%c",&color_code);
	switch(color_code)
	{
		case 'r':
			printf("stop..............");
			break;
		case'y':
			printf("slow down.........");
			break;
		case 'g':
			printf("go................");
			break;
		default:
			printf("enter valid color code");
			break;
	}
	
	return 0;d
}
