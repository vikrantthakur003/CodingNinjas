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

Node* EvenAfterOdd(Node* head)
{
	if(head==NULL)
	{
		return head;
	}
	
	Node* h1 = NULL;
	Node* t1 = NULL;
	Node* h2 = NULL;
	Node* t2 = NULL;
	
	while(head != NULL)
	{
		if(head->data % 2 == 0) // Number is Even
		{
			if(h1==NULL)
			{
				h1 = head;
				t1 = head;
			}
			else{
				t1->next = head;
				t1 = head;
			}
		}
		else{ // Number is odd
			   if(h2==NULL)
			   {
			   	h2 = head;
			   	t2 = head;
			}
			else{
				t2->next = head;
				t2 = head;
			}
		}
		head = head->next;
	}
	
	if(t2 != NULL)
	{
		t2->next = h1;
	}
	if(t1 != NULL)
	{
		t1->next = NULL;
	}
	
	if(h2==NULL)
	{
		return h1;
	}
	else{
		return h2;
	}
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	head = EvenAfterOdd(head);
	Print(head);
}
