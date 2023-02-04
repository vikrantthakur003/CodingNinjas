#include<iostream>
using namespace std;

int Search(int a[],int size,int x)
{
	if(size==0)
	{
		return -1;
	}
	if(a[0]==x)
	{
		return 0;
	}
	int ans = Search(a+1,size-1,x);
	if(ans==-1)
	{
		return -1;
	}
	return ans+1;
}
int main()
{
	int x;
	cout<<"Enter the Element : ";
	cin>>x;
	int a[] = {5,6,4,3,5,6};
	cout<<Search(a,6,x);
}
