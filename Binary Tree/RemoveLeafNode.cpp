BinaryTree<int>* RemoveLeaf(BinaryTree<int>* root)
{
	if(root==NULL || (root->left==NULL && root->right==NULL))
	{
		return NULL;
	}
	if(root->left != NULL)
	{
		root->left = RemoveLeaf(root->left);
	}
	if(root->right != NULL){
		root->right = RemoveLeaf(root->right);
	}
	return root;
}
