#include<iostream>
using namespace std;

bool CheckAB(char str[])
{
	if(str[0]=='\0')
	{
		return false;
	}
	
	if(str[0]=='a' && str[1]=='\0')
	{
		return true;
	}
	else if(str[0]=='a' && (str[1]=='a' || (str[1]=='b' && str[2]=='b')))
	{
		return CheckAB(str+1);
	}
	else if((str[0]=='b' && str[1]=='b') && str[2]=='\0')
	{
		return true;
	}
	else if((str[0]=='b' && str[1]=='b') && str[2]=='a')
	{
		return CheckAB(str+2);
	}
	return false;
	
	
}
int main()
{
	char str[] = "abba";
	
	cout<<CheckAB(str);
}
