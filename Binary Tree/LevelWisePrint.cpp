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

void PrintLevelTree(BinaryTree<int>* root)
{
	queue<BinaryTree<int>*> q;
	q.push(root);
	
	while(q.size() != 0)
	{
		BinaryTree<int>* front = q.front();
		q.pop();
		cout<<front->data<<":";
		
		if(front->left != NULL)
		{
			cout<<"L"<<front->left->data;
			q.push(front->left);
		}
		else{
			cout<<"L-1";
			cout<<",";
		}
		if(front->right != NULL)
		{
			cout<<"R"<<front->right->data;
			q.push(front->right);
		}
		else{
			cout<<"R-1";
		}
		cout<<endl;
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
	PrintLevelTree(root);
	delete root;
}
