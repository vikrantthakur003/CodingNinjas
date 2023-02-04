#include<iostream>
using namespace std;

int CountZero(int n)
{
	static int count = 0;
	if(n==0)
	{
		return 1;
	}
	if(n%10==0)
	{
		count++;
	}
	int smallAns = CountZero(n/10);
	return count;
}


int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	cout<<CountZero(n);
}
