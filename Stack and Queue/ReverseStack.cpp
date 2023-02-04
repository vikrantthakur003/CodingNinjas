#include<iostream>
#include<bits/stdc++.h>
using namespace std;

stack<int> ReverseStack(stack<int>s)
{
	stack<int>extra;
	while(!s.empty())
	{
		int ans = s.top();
		extra.push(ans);
		s.pop();
	}
	s = extra;
	return s;
}
int main()
{
	stack<int> s;
	s.push(12);
	s.push(23);
	s.push(34);
	cout<<s.top()<<endl; //  stack top element before Reverse Stack 
	s = ReverseStack(s);
	cout<<s.top()<<endl; // stack top element after Reverse Stack
}
