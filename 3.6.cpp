#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
};
class B
{
	protected:
		int b;
};
class C:public A,public B
{
	private:
		int c;
		public:
		void get()
		{
			a=6;
			b=7;
			c=9;
		}
		void show()
		{
			cout<<"Addition is: "<<a+b+c<<endl;
		}
};
int main()
{
	C c1;
	c1.get();
	c1.show();
	return 0;
}
