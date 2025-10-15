#include<iostream>
using namespace std;
class base
{
	public:
	virtual void show()
	{
	cout<<"Base class is called: "<<endl;
	}
};
class derived:public base
{
	public:
	void show()
	{
	cout<<"Derived class is called"<<endl;
	}
};
int main()
{
	derived d1;
	base b,*bptr;
	bptr=&b;
	bptr->show();
	bptr=&d1;
	bptr->show();
	return 0;
}
