#include<iostream>
using namespace std;

int LengthOfStr(char ch[])
{
	if(ch[0]=='\0')
	{
		return 0;
	}
	return 1+LengthOfStr(ch+1);
}
int main()
{
	char ch[200];
	cout<<"Enter the String : ";
	cin>>ch;
	cout<<LengthOfStr(ch);
}
