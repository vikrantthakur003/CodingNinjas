#include<iostream>
using namespace std;

int Multiplication(int n,int m)
{
	if(m==0)
	{
		return 0;
	}
	int smallAns = Multiplication(n,m-1);
	return n+smallAns;
}
int main()
{
	int n;
	cout<<"Enter the First Element : ";
	cin>>n;
	int m;
	cout<<"Enter the Second Element : ";
	cin>>m;
	cout<<Multiplication(n,m);
}
