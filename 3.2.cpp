#include<iostream>
using namespace std;
class binary
{
	private:
		int real,imag;
	public:
		void get()
		{
			cout<<"Enter the values: ";
			cin>>real>>imag;
		}
		void operator +(binary &b)
		{
			cout<<real+b.real<<"+"<<imag+b.imag<<"i";
		}
};
int main()
{
	binary b1,b2;
	b1.get();
	b2.get();
	b1+b2;
	return 0;
}
