#include<iostream>
using namespace std;
class base
{
	public:
	void print()
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
	derived d1,*dptr;
	dptr=&d1;
	dptr->print();
	dptr->show();
	return 0;
}
