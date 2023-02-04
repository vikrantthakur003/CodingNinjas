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

int LengthofList(Node* head)
{
	Node* curr = head;
	int length = 0;
	while(curr != NULL)
	{
		length++;
		curr = curr->next;
	}
	return length;
}
Node* AppendLastNode(Node* head,int n)
{
	Node* curr = head;
	int count = 1;
	while(count<n-1)
	{
		curr = curr->next;
		count++;
	}
	Node *h2 = curr->next;
	Node* temp = h2;
	curr->next = NULL;

	while(temp->next !=NULL)
	{
		temp = temp->next;
	}
	temp->next = head;
	
	return h2;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	head = AppendLastNode(head,5);
	Print(head);
}
