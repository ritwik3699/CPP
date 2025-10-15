#include<iostream>
using namespace std;
template<typename T>
void swap(T a, T b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<","<<"b="<<b<<endl;
}
int main()
{
    swap(10,20);
    swap('s','a');
    swap(30.5,25.5);
}