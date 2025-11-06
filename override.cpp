#include<iostream>
using namespace std;
class base
{
	public:
		virtual void print()
		{
			cout<<"In base class"<<endl;
		}
};
class derived1:public base
{
	public:
		void print() override
		{
			cout<<"In derived class"<<endl;
		}
};
int main()
{
	base b1;
	derived1 d1;
	base *ptr;
	ptr=&b1;
	ptr->print();
	ptr=&d1;
	ptr->print();
	return 0;
}
