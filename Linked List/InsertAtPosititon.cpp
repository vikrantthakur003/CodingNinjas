#include<iostream>
using namespace std;

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

Node* InsertAtPosition(Node* head,int position,int data)
{
	Node * temp = head;
	Node * newNode = new Node(data);
	int count = 0;
	
	if(position == 0)
	{
		newNode->next = head;
		head = newNode;
		return head;
	}
	while(temp != NULL && count<position-1)
	{
		temp = temp->next;
		count++;
	
	}
	if(temp != NULL)
	{
	newNode->next = temp->next;
	temp->next = newNode;
	}
	
	return head;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	int position;
	cin>>position;
	int value;
	cin>>value;
	head = InsertAtPosition(head,position,value);
	Print(head);
}
