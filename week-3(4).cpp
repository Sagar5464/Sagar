#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"Base class cobstructor called"<<endl;
		}
		~Base()
		{
			cout<<"Base class destructor called"<<endl;
		}
};
class Derived:public Base{
	public:
		Derived1()
		{
			cout<<"Derived1 class constructor called"<<endl;
		}
		~Derived()
		{
			cout<<"Derived1 class destructor called"<<endl;
		}
};
class Derived2:public Derived{
	public:
		Derived2()
		{
			cout<<"Derived2 class constructor called"<<endl;
		}
		~Derived2()
		{
			cout<<"Derived2 class destructor called"<<endl;
		}
};
int main()
{
	cout<<"Creating object of derived2 class..."<<endl;
	Derived2 obj;
	cout<<"Exiting main..."<<endl;
	return 0;
}
