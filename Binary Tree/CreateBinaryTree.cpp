#include<iostream>
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

void PrintTree(BinaryTree<int>* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<":";
	if(root->left != NULL)
	{
		cout<<"L"<<root->left->data;
	}
	if(root->right != NULL)
	{
		cout<<"R"<<root->right->data;
	}
	cout<<endl;
	PrintTree(root->left);
	PrintTree(root->right);
}

BinaryTree<int>* takeInput()
{
	int rootData;
	cout<<"Enter the Data :";
	cin>>rootData;
	if(rootData == -1)
	{
		return NULL;
	}
	BinaryTree<int>* root = new BinaryTree<int>(rootData);
	BinaryTree<int>* leftChild = takeInput();
	BinaryTree<int>* rightChild = takeInput();
	
	root->left = leftChild;
	root->right = rightChild;
	
	return root;
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
	BinaryTree<int>* root = takeInput();
	PrintTree(root);
}
