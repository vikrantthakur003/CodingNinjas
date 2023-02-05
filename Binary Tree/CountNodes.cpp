#include<iostream>
#include<queue>
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

int CountNodes(BinaryTree<int>* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	return 1 + CountNodes(root->left) + CountNodes(root->right);
}

bool SearchNode(BinaryTree<int>* root,int x)
{
	if(root==NULL)
	{
		return false;
	}
	if(root->left != NULL)
	{
		bool left = SearchNode(root->left,x);
		if(left==true)
		{
			return true;
		}
	}
	if(root->right != NULL)
	{
		bool right = SearchNode(root->right,x);
		if(right==true)
		{
			return true;
		}
	}
	
	if(root->data==x)
	{
		return true;
	}
	else{
		return false;
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
	PrintTree(root);
//	cout<<CountNodes(root);
	cout<<SearchNode(root,20);
	delete root;
}
