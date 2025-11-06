#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void makesound(){
			cout<<"Animal makes a sound"<<endl;
		}
};
class Dog:public Animal{
	public:
		void makesound() override {
		cout<<"bark"<<endl;
		}
};
class Cat:public Animal{
	public:
		void makesound() override {
		cout<<"meow!"<<endl;
		}
};
int main()
{
	Animal* myAnimal;
	Dog myDog;
	Cat myCat;
	myAnimal=&myDog;
	myAnimal->makesound();
	myAnimal=&myCat;
	myAnimal->makesound();
	return 0;
}
