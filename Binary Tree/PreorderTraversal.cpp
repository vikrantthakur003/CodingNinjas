#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTree{
	public:
	T data;
	BinaryTree *left;
	BinaryTree*right;
	
	BinaryTree(T data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
	
	~BinaryTree()
	{
		delete left;
		delete right;
	}
};
BinaryTree<int>* takeInputLevelWise()
{
	int rootData;
	cout<<"Enter Root Data :";
	cin>>rootData;
	if(rootData==-1)
	{
		return NULL;
	}
	
	BinaryTree<int>* root = new BinaryTree<int>(rootData);
	queue<BinaryTree<int>*> pendingNodes;
	pendingNodes.push(root);
	
	while(pendingNodes.size() != 0)
	{
		BinaryTree<int>* front = pendingNodes.front();
		pendingNodes.pop();
		
		int leftData;
		cout<<"Enter the left Child Data of "<<front->data<<":";
		cin>>leftData;
		if(leftData != -1)
		{
			BinaryTree<int>* leftChild = new BinaryTree<int>(leftData);
			front->left = leftChild;
			pendingNodes.push(leftChild);
		}
		
		int rightData;
		cout<<"Enter the Right Child Data of "<<front->data<<":";
		cin>>rightData;
		if(rightData != -1)
		{
			BinaryTree<int>* rightChild = new BinaryTree<int>(rightData);
			front->right = rightChild;
			pendingNodes.push(rightChild);
		}
	}
	return root;
}

void Preorder(BinaryTree<int>* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}

void IterativePreorder(BinaryTree<int>* root)
{
	stack<BinaryTree<int>* > st;
	st.push(root);
	
	while(!st.empty())
	{
		BinaryTree<int>* top = st.top();
		st.pop();
		cout<<top->data<<" ";
		
		if(top->right != NULL)
		{
			st.push(top->right);
		}
		if(top->left != NULL)
		{
			st.push(top->left);
		}
	}
}
int main()
{
/*
	BinaryTree<int>* root = new BinaryTree<int>(1);
	BinaryTree<int>* node1 = new BinaryTree<int>(2);
	BinaryTree<int>* node2 = new BinaryTree<int>(3);
	root->left = node1;
	root->right = node2;
*/	
//	BinaryTree<int>* root = takeInput();
	BinaryTree<int>* root = takeInputLevelWise();
//	Preorder(root);
	IterativePreorder(root);
	delete root;
}
