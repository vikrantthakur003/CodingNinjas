#include<iostream>
using namespace std;

bool Plindrome(string str,int s,int e)
{
	if(s>=e)
	{
		return false;
	}
	if(str[s]==str[e])
	{
		return true;
	}
	bool isPlindrome = Plindrome(str,s+1,e-1);
	if(isPlindrome)
	{
		return true;
	}
	return false;
}
int main()
{
	string str = "racecar";
	cout<<Plindrome(str,0,7);
}
