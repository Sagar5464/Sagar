#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void draw()
		{
			cout<<"Drawing shape"<<endl;
		}
};
class circle:public shape 
{
	public:
		void draw()
		{
			cout<<"Drawing Circle"<<endl;
		}
};
class square:public shape
{
	public:
		void draw()
		{
			cout<<"Drawing square"<<endl;
		}
};
int main(){
	shape* shapeptr;
	circle c;
	square s;
	shapeptr=&c;
	shapeptr->draw();
	shapeptr=&s;
	shapeptr->draw();
	return 0;
}
