#include<iostream>
using namespace std;

double GSum(int k)
{
	if(k==0)
	{
		return 1;
	}
	return 1+ 0.5*(GSum(k-1));
}
int main()
{
	// 1 + 1/2 + 1/2^2 + 1/2^3 + ..... + 1/2^k
	int k;
	cout<<"Enter the Number : ";
	cin>>k;
	cout<<GSum(k);
}
