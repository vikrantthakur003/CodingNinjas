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

Node* ReverseList(Node* head)
{
	Node* next = NULL;
	Node* curr = head;
	Node* prev = head;
	
	while(curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return next;
}

Node* MiddleNode(Node* head)
{
	Node* slow = head;
	Node* fast = head->next;
	
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
bool CheckPalindrome(Node* head)
{
	if(head->next==NULL)
	{
		return true;
	}
	
	Node* middle = MiddleNode(head);
	Node* temp = middle->next;
	middle->next = ReverseList(temp);
	
	Node* head1 = head;
	Node* head2 = middle->next;
	while(head2 != NULL)
	{
		if(head2->data != head1->data)
		{
			return 0;
		}
		head1 = head1->next;
		head2 = head2->next;
	}
	
	temp = middle->next;
	middle->next = ReverseList(temp);
	
	return true;
}
int main()
{
	Node* head = TakeInput();
	Print(head);
	cout<<endl;
	cout<<CheckPalindrome(head)<<endl;
}
