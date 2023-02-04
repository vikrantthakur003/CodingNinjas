#include<iostream>
using namespace std;

void PrintSubSequence(string str,string Output)
{
	if(str.empty())
	{
		cout<<Output<<" ";
		return;
	}
	PrintSubSequence(str.substr(1),Output);
	PrintSubSequence(str.substr(1),Output+str[0]);
}
int main()
{
	string str;
	cout<<"Enter the String : ";
	cin>>str;
	PrintSubSequence(str," ");
}
