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

bool SearchElement(TreeNode<int>* root,int x)
{
	if(root==NULL)
	{
		return false;
	}
	for(int i=0;i<root->children.size();i++)
	{
	bool isTrue = SearchElement(root->children[i],x);
	if(isTrue)
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
// 10 3 20 30 40 2 40 50 0 0 0 0 
int main()
{
	TreeNode<int>* root = TakeInputLevelWise();
	int x;
	cout<<"Enter the Element for Searching !!! ";
	cin>>x;
	cout<<SearchElement(root,x);
}
