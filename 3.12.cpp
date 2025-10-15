#include<iostream>
using namespace std;
class rectangle
{
	private:
		int l,b;
	public:
		void get(int l,int b)
		{
			this->l=l;
			this->b=b;
		}
		void area()
		{
			cout<<"Area="<<l*b;
		}
};
int main()
{
	rectangle r;
	r.get(10,60);
	r.area();
	return 0;
}
