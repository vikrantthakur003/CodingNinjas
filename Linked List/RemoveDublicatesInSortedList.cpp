#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
	 Node(int data)
	 {
	 	this->data = data;
	 	next = NULL;
	 }
};

void Print(Node* head)
{
	Node* curr = head; // for don't lose the address of head pointer
	while(curr != NULL)
	{
		cout<<curr->data<<" ";
		 curr = curr->next;
	}
}  
Node* TakeInput()
{
	int data;
	cout<<"Enter the Element : ";
	cin>>data;
	Node* head = NULL;
	
	while(data != -1)
	{
		Node* newNode = new Node(data);
		if(head==NULL)
		{
			head = newNode;
		}
		else{
			Node* temp = head;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newNode;
		}
		
		cin>>data;
	}
	return head;
}

Node* RemoveDublicate(Node* head)
{
	Node* curr = head;
	if(curr==NULL)
	{
		return head;
	}
	Node* temp = NULL;
	
	while(curr->next != NULL)
	{
		if(curr->data == curr->next->data)
		{
			temp = curr->next->next;
			delete(curr->next);
			curr->next = temp;
		}
		else{
			curr = curr->next;
		}
	}
	
	return head;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	head = RemoveDublicate(head);
	Print(head);
}
