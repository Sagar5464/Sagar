#include<stdio.h>
int main()
{
	struct node
	{
		int data;
		struct node*address;
	}
	first,second,third,*temp;
	printf("\n Enter 1st node value:");
	scanf("%d",&first.data);
	first.address=&second;
	printf("\n Enter 2nd node value:");
	scanf("%d",&second.data);
	second.address=&third;
	printf("\n Enter 3rd node value:");
	scanf("%d",&third.data);
	third.address=NULL;
	temp=&first;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->address;
	}
	return 0;
}
