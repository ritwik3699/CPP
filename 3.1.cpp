#include<iostream>
using namespace std;
class unary
{
	private:
		int x,y,z;
		public:
		void get()
		{
			x=10;
			y=43;
			z=56;
		}
		void operator -()
		{
			x=-x;
			y=-y;
			z=-z;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
};
int main()
{
	unary s;
	s.get();
	-s;
	s.show();
	return 0;
}
