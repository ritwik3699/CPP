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
		friend void operator +(binary &b1,binary &b2);
};
void operator +(binary &b1,binary &b2)
		{
			cout<<b1.real+b2.real<<"+"<<b1.imag+b2.imag<<"i";
		}
int main()
{
	binary b1,b2;
	b1.get();
	b2.get();
	b1+b2;
	return 0;
}
