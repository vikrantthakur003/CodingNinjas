#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int>&s,int num)
{
	if(s.empty() || num>s.top())
	{
		s.push(num);
		return;
	}
	
		int num2 = s.top();
		s.pop();
		sortedInsert(s,num);
		
		s.push(num2);
}
void SortStack(stack<int>&s)
{
	if(s.empty())
	{
		return;
	}
	int num = s.top();
	s.pop();
	SortStack(s);
	
	sortedInsert(s,num);
	
}
int main()
{
	stack<int> s;
	s.push(12);
	s.push(1);
	s.push(34);

	SortStack(s);
	
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top();
}
