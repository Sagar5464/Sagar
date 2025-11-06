#include<iostream>
using namespace std;
class A
{
	public:
		static int a;
		static void display()
		{
			a=a+1;
			cout<<a<<endl;
		}
};
int A::a=10;
int main()
{
	A obj1,obj2,obj3;
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}
