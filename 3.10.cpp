#include<iostream>
using namespace std;
class Base
{
	protected:
		Base()
		{
			cout<<"Base Constructor is called"<<endl;
		}
		~Base()
		{
			cout<<"Base Destructor is called"<<endl;
		}
};
class Derived:public Base
{
	public:
		Derived()
		{
			cout<<"Derived Constructor is called"<<endl;
		}
		~Derived()
		{
			cout<<"Derived Destructor is called"<<endl;
		}
};
int main()
{
	Derived d;
	return 0;
}
