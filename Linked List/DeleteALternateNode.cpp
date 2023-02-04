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

void DeleteNthNode(Node* head,int m,int n)
{
	Node* temp1 = head;
	Node* temp2;
	
	while(temp1 != NULL)
	{
		for(int cnt = 1;cnt<m && temp1!= NULL;cnt++)
		{
			temp1 = temp1->next;
		}
		if(temp1==NULL)
		{
			return;
		}
		
		temp2 = temp1->next;
		for(int cnt = 1;cnt<=n && temp2!= NULL;cnt++)
		{
			Node* deleteNode = temp2;
			temp2 = temp2->next;
			delete(deleteNode);
		}
		temp1->next = temp2;
		temp1 = temp2;
	}
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	DeleteNthNode(head,2,3);
	Print(head);
}
