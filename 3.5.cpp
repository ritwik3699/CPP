#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
};
class B:public A
{
	private:
		int b;
		public:
		void get()
		{
			a=7;
			b=8;
		}
		void show()
		{
			cout<<"Addition is: "<<a+b<<endl;
		}
};
int main()
{
	B b1;
	b1.get();
	b1.show();
	return 0;
}
