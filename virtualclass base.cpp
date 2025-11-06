#include<iostream>
using namespace std;
class a{
	public:
	void func()
	{
		cout<<"A"<<endl;
	}
};
class b:virtual public a{
	
};
class c:virtual public a{
	
};
class d:public b ,public c{
	
};
int main()
{
	d obj;
	obj.func();
	return 0;
}
