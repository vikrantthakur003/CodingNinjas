void solve(Node* root,int &sum)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        sum += root->data;
    }
    solve(root->left,sum);
    solve(root->right,sum);
}
int sumOfLeafNodes(Node *r ){
     /*Your code here */
     
     int sum = 0;
     solve(r,sum);
     return sum;
}
