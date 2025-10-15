//Bubble sort using function template
#include<iostream>
using namespace std;
template<typename T>
void sort(T a[],int n)
{
	T temp;
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
	    {
		    if(a[j]>a[j+1])
		    {
		    	temp=a[j];
		    	a[j]=a[j+1];
		    	a[j+1]=temp;
			}
	    }
	}	
}
template<typename T>
void print(T a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
}
int main()
{
    int a[5]={8,5,6,4,2};
    char c[5]={'s','e','h','m','a'};
    float f[5]={4.5,23.6,34.8,13.4,9.5};
    sort(a,5);
    print(a,5);
    cout<<"\n";
    sort(c,5);
    print(c,5);
    cout<<"\n";
    sort(f,5);
    print(f,5);
}