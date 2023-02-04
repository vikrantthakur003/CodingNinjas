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

Node* KReverseNode(Node* head,int k)
{
	Node* next = NULL;
	Node* curr = head;
	Node* prev = NULL;
	int cnt = 0;
	
	while(curr != NULL && cnt <k)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		cnt++;
	}
	
	if(next != NULL)
	{
		head->next = KReverseNode(next,k);
	}
	return prev;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	head = KReverseNode(head,4);
	Print(head);
}
