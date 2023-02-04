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

Node* BubbleSort(Node* head)
{
	if(head==NULL)
	{
		return head;
	}
	Node* curr = head;
	Node* tail = head;
	
	while(tail->next!= NULL)
	{
		tail = tail->next;
	}
	
	while(curr != tail)
	{
		if(curr->data > curr->next->data)
		{
			int temp = curr->next->data;
			curr->next->data = curr->data;
			curr->data = temp;
		}
		else if(curr->next==tail)
		{
		 	tail = curr;
		 	curr = head;
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
	head = BubbleSort(head);
	Print(head);
}
