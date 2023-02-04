#include<iostream>
using namespace std;

int Subs(string str, string Output[])
{
	if(str.empty())
	{
		Output[0] = " ";
		return 1;
	}
	
	string substring = str.substr(1);
	int smallSize = Subs(substring,Output);
	
	for(int i=0;i<smallSize;i++)
	{
		Output[i+smallSize] = str[0] + Output[i];
	}
	return 2*smallSize; //Output.size()
}
int main()
{
	string str;
	cout<<"Enter the String : ";
	cin>>str;
	string *Output = new string[1000];
	int Size = Subs(str,Output);
	
	for(int i=0;i<Size;i++)
	{
		cout<<Output[i]<<" ";
	}
}
