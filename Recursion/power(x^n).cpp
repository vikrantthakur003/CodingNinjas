#include<iostream>
using namespace std;

int power(int x,int n)
{
	if(n==1)
	{
		return x;
	}
	int smallOutput = power(x,n-1);
	return x*smallOutput;
}
int main()
{
	int x,n;
	cout<<"Enter the Value : ";
	cin>>x;
	cout<<"Enter the Power : ";
	cin>>n;
	
	int output = power(x,n);
	cout<<output<<endl;
}
