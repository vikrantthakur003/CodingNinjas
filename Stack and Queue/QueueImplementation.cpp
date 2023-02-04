#include<iostream>
using namespace std;
template <typename T>
class QueueUsingArray{
	T *data;
	int nextIndex; // Rear
	int frontIndex; // Front
	int size;
	int capacity;
	
	public:
	QueueUsingArray(int s) // s =kitni size ka queue create kre
	{
		data = new T[s];
		nextIndex = 0;
		frontIndex = -1;
		size = 0;
		capacity = s;
	}
	
	int getSize()
	{
		return size;
	}
	bool isEmpty()
	{
		if(size==0)
		{
			return true;
		}
		return false;
	}
	
	void Enqueue(T element)
	{
		if(size==capacity)
		{
			cout<<"Queue is Full"<<endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex = (nextIndex+1)%capacity;
		if(frontIndex=-1)
		{
			frontIndex = 0;
		}
		size++;
	}
	T front()
	{
		if(isEmpty())
		{
			cout<<"Queue is Empty"<<endl;
			return 0;
		}
		return data[frontIndex];
	}
	
	T Dequeue()
	{
		if(isEmpty())
		{
			cout<<"Queue is Empty";
			return 0;
		}
		T ans = data[frontIndex];
		frontIndex = (frontIndex+1)%capacity;
		size--;
		
		return ans;
	}
};

int main()
{
	QueueUsingArray<int> q(5);
	q.Enqueue(100);
	q.Enqueue(200);
	q.Enqueue(300);
	cout<<q.getSize()<<endl;
	cout<<q.Dequeue()<<endl;
	cout<<q.getSize()<<endl;
	cout<<q.front()<<endl;
}
