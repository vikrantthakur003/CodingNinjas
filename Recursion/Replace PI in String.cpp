#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ReplacePI(char ch[],int s)
{
	if(ch[s] =='\0' || ch[s+1]=='\0')
	{
		return;
	}
	ReplacePI(ch,s+1);
	if(ch[s]=='p' && ch[s+1]=='i')
	{
		for(int i=strlen(ch);i>=s+2;i--)
		{
			ch[i+2] =ch[i];
		}
		ch[s] = '3';
		ch[s+1] = '.';
		ch[s+2] = '1';
		ch[s+3] = '4';
	}
	else{
		return;
	}
}
int main()
{
	char ch[] = "xpix";
	ReplacePI(ch,0);
	cout<<ch<<endl;
}
