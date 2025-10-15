#include<iostream>
using namespace std;
template <typename T>
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
	cout<<"sorted array:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
};

int main()
{
	int a[5]={51,59,13,77,8};
	char c[5]={'r','i','t','h','u'};
	float f[5]={3.5,14.7,78.2,55.2,95.3};
	sort (a,5);
	sort (c,5);
	sort (f,5);
	return 0; }
