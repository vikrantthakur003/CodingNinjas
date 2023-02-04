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

void Print(Node * head)
{
	Node* curr = head; // for don't lose the address of head pointer
	while(curr != NULL)
	{
		cout<<curr->data<<" ";
		 curr = curr->next;
	}
}  
int main()
{ // Statically
	Node n1(1);
	Node* head = &n1;
	
	Node n2(2);
	n1.next = &n2;
	
	Node n3(3);
	n2.next = &n3;
	
	Node n4(4);
	n3.next =  &n4;
	
	Node n5(5);
	n4.next = &n5;
	// Print the LinkedList 
	Print(head);
	
	
	/* Dynamically
	Node* n3 = new Node(10);
	Node* head = n3;
	
	Node* n4 = new Node(20);
	n3->next = n4;
	
	cout<<head->data<<endl;	
	*/
}
