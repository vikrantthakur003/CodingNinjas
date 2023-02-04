#include<iostream>
using namespace std;

int SumDigit(int n)
{
	static int sum = 0;
	if(n==0)
	{
		return 0;
	}
	return n%10 + SumDigit(n/10);
}
int main()
{
	int n;
	cout<<"Enter the Digit : ";
	cin>>n;
	cout<<SumDigit(n);
}
