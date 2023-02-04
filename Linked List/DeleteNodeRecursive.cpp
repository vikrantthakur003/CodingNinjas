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

Node* DeleteNode(Node* head,int position)
{
	if(head==NULL)
	{
		return head;
	}
	if(position==0)
	{
		head = head->next;
		
		return head;
	}
	else if(position == 1)
	{
		Node* temp = head->next;
		head->next = temp->next;
		delete(temp);
		
		return head;
	}
	DeleteNode(head->next,position-1);
	
	return head;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	int position;
	cin>>position;
	head = DeleteNode(head,position);
	Print(head);
}
