Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(root==NULL)
   {
       return NULL;
   }
   if(root->data == n1 || root->data == n2)
   {
       return root;
   }
   
   root->left = LCA(root->left,n1,n2);
   root->right = LCA(root->right,n1,n2);
   
   if(root->left != NULL && root->right==NULL)
   {
       return root->left;
   }
   else if(root->left == NULL && root->right != NULL)
   {
       return root->right;
   }
   else if(root->left != NULL && root->right != NULL)
   {
       return root;
   }
   else{
       return NULL;

