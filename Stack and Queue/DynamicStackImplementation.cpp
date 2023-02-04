#include<iostream>
using namespace std;

class StackUsingArray{
	int *data;
	int nextIndex;
	int capacity;
	
	public:
	StackUsingArray()
	{
		data = new int[4];
		nextIndex = 0;
		capacity = 4;
	}
	
	int size()
	{
		return nextIndex;
	}
	bool isEmpty()
	{
		if(nextIndex==0)
		{
			return true;
		}
		return false;
	}
	
	void push(int element)
	{
		if(nextIndex==capacity) // Stack is Full
		{
			int *newData = new int[2*capacity];
			for(int i=0;i<capacity;i++)
			{
				newData[i] = data[i];
			}
			capacity *= 2;
			delete [] data;
			data = newData;
		}
		data[nextIndex] = element;
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
		return data[nextIndex-1];
	}
};
int main()
{
	StackUsingArray s1;
	s1.push(12);
	s1.push(22);
	s1.push(23);
	s1.push(34);
	s1.push(56);
	cout<<s1.top()<<endl;
}
