#include<iostream>
using namespace std;

bool Search(int a[],int size,int x)
{
	if(size==0)
	{
		return false;
	}
	if(a[0]==x)
	{
		return true;
	}
	return Search(a+1,size-1,x);
}
int main()
{
	int x;
	cout<<"Enter the Element : ";
	cin>>x;
	int a[] = {9,8,10};
	cout<<Search(a,3,x);
}
