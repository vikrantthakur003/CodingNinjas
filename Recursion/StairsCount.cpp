#include<iostream>
using namespace std;

int Stairs(int num)
{
	if(num==1)
	{
		return 1;
	}
	if(num==2)
	{
		return 2;
	}
	return Stairs(num-1) + Stairs(num-2) + Stairs(num-3);
}
int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	cout<<Stairs(n);
}
