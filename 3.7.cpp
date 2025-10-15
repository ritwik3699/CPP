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
		
};
class C:public B
{
	private:
		int c;
		public:
		void get()
		{
			a=5;
			b=8;
			c=9;
		}
		void show()
		{
			cout<<"Multiplication is : "<<a*b*c<<endl;
		}
};
int main()
{
	C c1;
	c1.get();
	c1.show();
	return 0;
} 
