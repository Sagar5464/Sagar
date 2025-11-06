// object as a class member
#include<iostream>
using namespace std;
class Adress 
{
	string city;
	public:
		Adress(string c) { city   = c; }
		void show() 
		{
			cout<<"city:"<<city<<endl;
		}
};
class student
{
	string name;
	Adress addr;       //object as a member
	public:
		student(string n, string c) : name(n),addr(c) {}
		void display()
		{
			cout<<"Name: "<<name<<endl;
			addr.show();
		}
};
int main()
{
	student s("Ravi", "Hyderabad");
	s.display();
	return 0;
}
