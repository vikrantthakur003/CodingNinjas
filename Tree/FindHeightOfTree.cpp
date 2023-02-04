#include<iostream>
#include<queue>
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



TreeNode<int>* TakeInputLevelWise()
{
	int rootData;
	cout<<"Enter the root Data : ";
	cin>>rootData;
	
	TreeNode<int>* root = new TreeNode<int>(rootData);
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	
	while(pendingNodes.size() != 0)
	{
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		
		int numChild;
		cout<<"Enter the number of Children of "<<front->data<<" : ";
		cin>>numChild;
		
		for(int i=0;i<numChild;i++)
		{
			int dataNode;
			cout<<"Enter the "<<i<<"th Child Data of "<<front->data<<" : ";
			cin>>dataNode;
			
			TreeNode<int>* child  = new TreeNode<int>(dataNode);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}


void HeightTree(TreeNode<int> *root,int height,int *maxi)
{
	if(root==NULL)
	{
		return 0;
	}
	if(*maxi<height)
	{
		*maxi = height;
	}
	for(int i=0;i<root->children.size();i++)
	{
		HeightTree(root->children[i],height+1,maxi);
	}
}
int main()
{
	TreeNode<int>* root = TakeInputLevelWise();
//	PrintTree(root);
	int maxi = 1;
	int height = 1;
	HeightTree(root,height,&maxi);
	cout<<"Height of Tree : "<<maxi;
}
