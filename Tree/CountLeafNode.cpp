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

int CountLeaf(TreeNode<int>* root,int cnt)
{
	queue<TreeNode<int>*> q;
	q.push(root);
	
	while(q.size() != 0)
	{
		TreeNode<int>* front = q.front();
		q.pop();
		
		if(front->children.size()==0)
		{
			cnt++;
		}
		else{
		for(int i=0;i<front->children.size();i++)
		{
			q.push(front->children[i]);
		}
	}
 }
 return cnt;
}


int CountLeafNode(TreeNode<int>* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int cnt = 0;
	if(root->children.size()==0)
	{
		return 1;
	}
	for(int i=0;i<root->children.size();i++)
	{
		cnt = cnt + CountLeafNode(root->children[i]);
	}
	return cnt;
}
int main()
{
	TreeNode<int>* root = TakeInputLevelWise();
//	PrintTree(root);
	int cnt = 0;
//	cout<<CountLeaf(root,cnt);
	cout<<CountLeafNode(root);
}
