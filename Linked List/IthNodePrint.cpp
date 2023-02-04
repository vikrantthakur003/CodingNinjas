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



int IthNode(Node* head,int index)
{
	Node* curr = head;
	int count = 0;
	
	while(curr != NULL)
	{
		if(count == index)
		{
			return curr->data;
		}
		count++;
		curr = curr->next;
	}
	return -1;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	cout<<"Ith Node is : "<<IthNode(head,3);
}
