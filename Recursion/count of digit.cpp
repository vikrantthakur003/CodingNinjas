#include<iostream>
using namespace std;

int countDigit(int n)
{
	static int count =0;
	if(n>0)
	{
		count++;
		countDigit(n/10);
	}
	return count;
}
int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	int output = countDigit(n);
	cout<<output<<endl;
}
