#include<iostream>
using namespace std;

class StackUsingArray{
	int *data;
	int nextIndex;
	int capacity;
	
	public:
	StackUsingArray(int totalSize)
	{
		data = new int[totalSize];
		nextIndex = 0;
		capacity = totalSize;
	}
	
	int size()
	{
		return nextIndex;
	}
	
	bool isEmpty()
	{
		if(nextIndex == 0)
		{
			return true;
		}
		else{
			return false;
		}
	}
	
	void push(int element)
	{
		if(nextIndex==capacity)
		{
			cout<<"Stack is Full "<<endl;
			return;
		}
		data[nextIndex] =  element;
		nextIndex++;
	}
	
	int pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty"<<endl;
			return INT_MIN;
		}
		nextIndex--;
		return data[nextIndex];
	}
	
	int top()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty"<<endl;
			return INT_MIN;
		}
		
		return data[nextIndex-1];
	}
	
};
int main()
{
	StackUsingArray s1(5);
	s1.push(12);
		s1.push(22);
	s1.push(42);
	s1.push(62);
	s1.push(52);
	
	s1.pop();
cout<<s1.size()<<endl;;
	cout<<s1.top();
}
