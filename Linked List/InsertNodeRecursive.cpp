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

Node* InsertNodeRecursive(Node* head,int position,int data)
{
	if(head==NULL)
	{
		return head;
	}
	if(position==0)
	{
		Node* newNode = new Node(data);
		newNode->next = head;
		head = newNode;
		
		return head;
	}
	else if(position == 1)
	{
		Node* newNode = new Node(data);
		Node* temp = head->next;
		head->next = newNode;
		newNode->next = temp;
		return head;
	}
	InsertNodeRecursive(head->next,position-1,data);
	return head;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	int position;
	cin>>position;
	int data;
	cin>>data;
	InsertNodeRecursive(head,position,data);
	Print(head);
}
