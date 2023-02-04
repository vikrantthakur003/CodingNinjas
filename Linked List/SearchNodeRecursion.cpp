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

int SearchNode(Node* head,int key)
{
	static int count = 0;
	if(head==NULL)
	{
		return -1;
	}
	if(head->data==key)
	{
		return count;
	}
	count++;
    return SearchNode(head->next,key);
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	int key;
	cin>>key;
	cout<<SearchNode(head,key);
}
