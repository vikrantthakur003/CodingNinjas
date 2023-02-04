#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

string dial(int num)
{
	unordered_map<int,string>mp;
	mp[0] = "";
	mp[1] = "";
	mp[2] = "abc";
	mp[3] = "def";
	mp[4] = "ghi";
	mp[5] = "jkl";
	mp[6] = "mno";
	mp[7] = "pqrs";
	mp[8] = "tuv";
	mp[9] = "wxyz";
	
	return mp[num];
}

void Keypad(int num,string Output)
{
	if(num==0)
	{
		return;
	}
	string subString = dial(num%10);
	for(int i=0;i<subString.size();i++)
	{
		Keypad(n/10,subString[i]+Output);
	}
}
int main()
{
	int num;
	cout<<"Enter the Number : ";
	cin>>num;
	cout<<Keypad(num,"");
}
