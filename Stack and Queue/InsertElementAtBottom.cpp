#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void InsertBottom(stack<int> &s,int element)
{
	if(s.empty())
	{
		s.push(element);
		return;
	}
	int num = s.top();
	s.pop();
	InsertBottom(s,element);
	
	s.push(num);
}
int main()
{
	stack<int> s;
	s.push(12);
	s.push(23);
	stack<int> temp;
	
	int n = s.size();
	int n1 = temp.size();
	int element = 5;
	

	InsertBottom(s,element);
	
	cout<<s.top()<<endl;
	s.pop();
	s.pop();
	cout<<s.top()<<endl;
}
