#include<iostream>
using namespace std;
class student{
	protected:
		string name;
		int rollno;
		void getst()
		{
			cout<<"Enter name, rollno:";
			cin>>name>>rollno;
		}
		void showst(){
			cout<<"Name:"<<name<<endl;
			cout<<"ROllno:"<<rollno<<endl;
		}
};
class project{
	protected:
		float ip,ep;
		void getp()
		{
			cout<<"Enter ip and ep marks:";
			cin>>ip>>ep;
		}
};
class marks:public student{
	protected:
		float m1,m2,m3,m4,m5;
		void getm(){
			getst();
			cout<<"Enter m1,m2,m3,m4,m5 marks:";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
};
class percentage:public marks,public project{
	public:
		float per;
		void showp(){
			getm();
			getp();
			per=(m1+m2+m3+m4+m5)/5;
			showst();
			cout<<"Percentage:"<<per<<endl;
		}
};
int main(){
	percentage p;
	p.showp();
}
