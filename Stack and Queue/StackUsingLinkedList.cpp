#include<iostream>
using namespace std;
template <typename T>
// Stack using Linked List using Template
	
class Node{
	public:
	T data;
	Node<T>* next;


	Node(T data)
	{
		this->data = data;
		next = NULL;
	}
};

template <typename T> //every class ke liye alg alg use krna pdega
class StackUsingLL{
	Node<T>* head;
	int size;
	
	public:
	StackUsingLL()
	{
		head = NULL;
		size = 0;
	}
	
	int getSize()
	{
		return size;
	}
	
	bool isEmpty()
	{
		if(head==NULL)
		{
			return true;
		}
		return false;
	}
	
	void push(T element)
	{
		Node<T>* newNode = new Node<T>(element);
		if(head==NULL)
		{
			head = newNode;
		}
		newNode->next = head;
		head = newNode;
		size++;
	}
	
	T pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is Empty"<<endl;
			return 0;
		}
		T ans = head->data;
		Node<T>* temp = head;
		head = head->next;
		delete(temp);
		
		return ans;
	}
	
	T top()
	{
		if(isEmpty())
		{
			return 0;
		}
		
		return head->data;
	}
};
int main()
{
	StackUsingLL<int> s1;
	s1.push(10);
	s1.push(29);
	cout<<s1.top()<<endl;
	
	s1.pop();
	cout<<s1.top()<<endl;
	
	StackUsingLL<double> s2;
	s2.push(20.023);
	cout<<s2.top()<<endl;
}
