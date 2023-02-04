#include<iostream>
using namespace std;
template <typename T>

class StackUsingArray{
	T *data;
	int nextIndex;
	int capacity;
	
	public:
	StackUsingArray()
	{
		data = new T(4);
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
	
	void push(T element)
	{
		if(nextIndex==capacity)
		{
			T *newData = new T(2*capacity);
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
	
	T pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty"<<endl;
			return 0;
		}
		nextIndex--;
		return data[nextIndex];
	}
	
	T top()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty"<<endl;
			return 0;
		}
		return data[nextIndex-1];
	}
};
int main()
{
	StackUsingArray<int> s1;
	s1.push(10);
	cout<<s1.top()<<endl;
	
	StackUsingArray<double> s2;
	s2.push(100.0023);
	cout<<s2.top()<<endl;
}
