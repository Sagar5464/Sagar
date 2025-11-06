#include<iostream>
using namespace std;
class sample
{
	public:
		int a;
		sample(int a)
		{
			this->a=a;
		}
		void display()
		{
			cout<<"the value of a is "<<a;
		}

};
int main()
{
	sample s(10);
	s.display();
	return 0;
}
