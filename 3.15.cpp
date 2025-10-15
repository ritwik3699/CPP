#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class rectangle:public shapes
{
	public:
		int l,b;
		void area()
		{
			l=44;
			b=55;
			cout<<"Area of rectangle="<<l*b<<endl;
		}
};
class square:public shapes
{
	public:
		int s;
		void area()
		{
			s=45;
			cout<<"Area of square="<<s*s<<endl;
		}
};
class triangle:public shapes
{
	public:
		int b,h;
		void area()
		{
			b=5;
			h=8;
			cout<<"Area of triangle="<<0.5*b*h<<endl;
		}
};
int main()
{
	shapes *sptr;
	rectangle r;
	sptr=&r;
	sptr->area();
	square s;
	sptr=&s;
	sptr->area();
	triangle t;
	sptr=&t;
	sptr->area();
}
