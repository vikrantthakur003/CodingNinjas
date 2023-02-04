#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void RemoveX(char ch[])
{
	if(ch[0]=='\0')
	{
		return;
	}
	if(ch[0] != 'x')
	{
		RemoveX(ch+1);
	}
	else // ch[0] == 'x'
	{
		int i=1;
		for(;ch[i] != '\0';i++)
		{
			ch[i-1] = ch[i];
		}
		ch[i-1] = ch[i];
		RemoveX(ch);
	}
	return;
}
int main()
{
	char ch[] = "xabxcdex";
	RemoveX(ch);
	cout<<ch<<endl;
}
