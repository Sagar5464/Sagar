#include<iostream>
using namespace std;
class test{
	int x;
public:
	test(int x)
	{
		this->x=x;
	}
	void show(){cout<<"value of x: "<<this->x<<endl;
	}
};
int main()
{
	test t(50);
	t.show();
	return 0;
}
