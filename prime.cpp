#include<iostream>
using namespace std;
int main()
{
	int n,i,factor_count=0;
	cin>>n;
	for(i=1;i<=n;i++)
	
		if(n%i==0)
		{
			i++;
		}
		if(factor_count==2)
		{
			factor_count++;
			cout<<"prime";}
		
		else{
			cout<<"not prime";
		}

return 0;
	
}
