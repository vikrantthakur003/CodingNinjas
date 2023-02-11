void CreateInsert(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left != NULL)
	{
		Node* temp1 = root->left;
		Node* newNode = new Node(root->data);
		root->left = newNode;
		newNode->left = temp1;
	}
	else{
		Node* newNode = new Node(root->data);
		root->left = newNode;
	}
	
	CreateInsert(root->left->left);
	CreateInsert(root->right);
}
