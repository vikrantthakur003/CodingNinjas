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

Node* SwapTwoNode(Node* head,int i,int j)
{
	Node* curr = head;
	int cnt = 0;
	Node*val1 = NULL;
	Node*val2 = NULL;
	
	while(cnt <= i || cnt<=j)
	{
		if(cnt==i)
		{
			val1 = curr;
		}
		if(cnt==j)
		{
			val2=curr;
		}
		curr  = curr->next;
		cnt++;
	}
	
	int temp = val1->data;
	val1->data = val2->data;
	val2->data = temp;
	
	return head;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	head = SwapTwoNode(head,3,4);
	Print(head);
}
