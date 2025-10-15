#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
};
class B:public A
{
	protected:
		int b;
		public:
		void get()
		{
			a=4;
			b=5;
		}
		void sum()
		{
			cout<<"Add is : "<<a+b<<endl;
		}
		
};
class C:public A
{
	private:
		int c;
		public:
		void get()
		{
			a=4;
			c=3;
		}
		void Mul()
		{
			cout<<"Multiplication is : "<<a*c<<endl;
		}
};
class D:public A
{
	protected:
		int d;
		public:
		void get()
		{
			a=8;
			d=8;
		}
		void sub()
		{
			cout<<"subtraction is : "<<a-d<<endl;
		}
		
};
int main()
{
	B b1;
	b1.get();
	b1.sum();
	C c1;
	c1.get();
	c1.Mul();
	D d1;
	d1.get();
	d1.sub();
	return 0;
}
