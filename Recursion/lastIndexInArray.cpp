#include<iostream>
using namespace std;

int LastSearch(int a[],int size,int x)
{
	if(size==0)
	{
		return -1;
	}
	if(a[size-1]==x)
	{
		return size-1;
	}
	
	int ans = LastSearch(a+1,size-2,x);
	return ans+1;
}
int main()
{
	int x;
	cout<<"Enter the Element : ";
	cin>>x;
	int a[] = {9,8,10,8};
	cout<<LastSearch(a,6,x);
}
