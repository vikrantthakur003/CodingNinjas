vector<int>* getPath(Node* root,int key)
{
	if(root == NULL)
	{
		return NULL;
	}
	if(root->data == key)
	{
		vector<int>* ans = new vector<int>();
		ans->push_back(root->data);
		return ans;
	}
	if(root->data > key)
	{
		vector<int>* left = getPath(root->left,key);
		if(left != NULL)
		{
			left->push_back(root->data);
			return left;
		}
	}
	if(root->data < key)
	{
		vector<int>* right = getPath(root->right,key);
		if(right != NULL)
		{
			right->push_back(root->data);
			return right;
		}
	}
	
}
