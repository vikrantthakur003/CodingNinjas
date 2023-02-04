#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void RemoveMiddleElement(stack<int>&s,int n,int cnt)
{
	if(cnt==n/2)
	{
		s.pop();
		return;
	}
	int num = s.top();
	s.pop();
	RemoveMiddleElement(s,n,cnt+1);
	
	s.push(num);
}
int main()
{
	stack<int> s;
	s.push(2);
	s.push(3);
	s.push(4);
	
	int n = s.size();
	int cnt = 0;
	RemoveMiddleElement(s,n,cnt);
	
}
