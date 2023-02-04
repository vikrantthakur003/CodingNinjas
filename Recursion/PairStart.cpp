#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void PairStar(char str[],int s)
{
	if(str[s]=='\0' || str[s+1]=='\0')
	{
		return;
	}
	PairStar(str,s+1);
	if(str[s]==str[s+1])
	{
		for(int i=strlen(str);i>=1;i--)
		{
			str[i+1] = str[i];
		}
		str[s+1] = '*';
	}
	return;
}
int main()
{
	char str[] ="hello";
	PairStar(str,0);
	cout<<str<<endl;
}
