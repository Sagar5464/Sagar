#include<stdio.h> 
int main() 
{ 
int x=10,y=20; 
int *p,*q; 
p=&x; 
q=&y; 
printf("%d %d \n",x,y); 
printf("%d %d\n",*p,*q); 
} 
