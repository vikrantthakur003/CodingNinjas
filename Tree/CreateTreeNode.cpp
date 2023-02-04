#include<iostream>
#include<vector>
using namespace std;
template <typename T>
class TreeNode{
	public:
	T data;
	vector<TreeNode<T>*> children;
	
	TreeNode(T data)
	{
		this->data = data;
	}
	~TreeNode()
	{
		for(int i=0;i<children.size();i++)
		{
			delete children[i];
		}
	}
};

void PrintTree(TreeNode<int>* root)
{
	if(root==NULL) // this is not base case 
	{
		return;
	}
	cout<<root->data<<":";
	for(int i=0;i<root->children.size();i++) // print the chilren of root
	{
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root->children.size();i++)
	{
		PrintTree(root->children[i]);
	}	
}

TreeNode<int>* TakeInput()
{
	int rootData;
	cout<<"Enter the Data :";
	cin>>rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	
	int n;
	cout<<"Enter the children of "<<root->data<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		TreeNode<int>* child = TakeInput();
		root->children.push_back(child);
	}
	return root;
}

int main()
{
/*
	TreeNode<int>* root = new TreeNode<int>(1);
	TreeNode<int>* node1 = new TreeNode<int>(2);
	TreeNode<int>* node2 = new TreeNode<int>(3);
	root->children.push_back(node1);
	root->children.push_back(node2);
*/
//	TreeNode<int>* root =  TakeInput();
//	TreeNode<int>* root = TakeInputLevelWise();
	PrintTree(root);
	
	delete root;  
}
