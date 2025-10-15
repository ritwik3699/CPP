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
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
		friend void operator -(unary &u);
};
void operator -(unary &u)
	{
		u.x=-u.x;
		u.y=-u.y;
		u.z=-u.z;
	}
int main()
{
	unary s;
	s.get();
	-s;
	s.show();
	return 0;
}
