#include<iostream>
using namespace std;

int ConvertInteger(string str,int n)
{
	
	if(n<0)
	{
		return 0;
	}
	return (str[n]-'0') + ConvertInteger(str,n-1)*10; 
}
int main()
{
	string str = "3231";
	cout<<ConvertInteger(str,str.length()-1);
}
