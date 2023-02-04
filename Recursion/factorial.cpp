#include<iostream>
using namespace std;

int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	
	int smallOutput = fact(n-1);
	
	return n*smallOutput;
}
int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	int output = fact(n);
	cout<<output<<endl;
}
