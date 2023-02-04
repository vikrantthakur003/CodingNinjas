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

Node* DetectLoop(Node*head)
{
	if(head==NULL)
	{
		return NULL;
	}
	Node* slow = head;
	Node* fast = head;
	
	while(slow != NULL && fast!=NULL)
	{
		fast = fast->next;
		if(fast != NULL)
		{
			fast = fast->next;
		}
		
		slow = slow->next;
		
		if(slow==fast)
		{
			return slow;
		}
	}
	return NULL;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	head = DetectLoop(head);
	cout<<head<<endl;
}
