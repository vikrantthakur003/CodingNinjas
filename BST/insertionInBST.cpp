TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    if(root==NULL)
    {
        TreeNode<int>* newNode = new TreeNode<int>(val);
        return newNode;
    }
    if(root->val > val)
    {
        root->left = insertionInBST(root->left,val);
    }
    else{
        root->right = insertionInBST(root->right,val);
    }
    return root;
}
