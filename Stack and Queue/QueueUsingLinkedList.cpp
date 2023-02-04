#include<iostream>
using namespace std;

template <typename T>
class Node{
	public:
	T data;
	Node *next;
	
	Node(T data)
	{
		this->data = data;
		next = NULL;
	}
};


template <typename T>
class QueueUsingLL{
	Node<T>* head;
	Node<T>* tail;
	int size;
	
	public:
	QueueUsingLL()
	{
		head = NULL;
		tail = NULL;
		size = 0;
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
		Node<T>* newNode = new Node<T>(element);
		if(head==NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = newNode;
		}
		size++;
	}
	
	T front()
	{
		if(isEmpty())
		{
			return 0;
		}
		return head->data;
	}
	
	T Dequeue()
	{
		if(isEmpty())
		{
			cout<<"Queue is Empty"<<endl;
		}
		T ans =  head->data;
		Node<T>* temp = head;
		head =  head->next;
		delete(temp);
		size--;
		return ans;
	}
};
int main()
{
	QueueUsingLL<int> q;
	q.Enqueue(12);
	q.Enqueue(23);
	cout<<q.getSize()<<endl;
	q.Dequeue();
	cout<<q.front()<<endl;
}
