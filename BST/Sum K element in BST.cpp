void solve(Node* root,vector<int>&ans)
{
    if(root==NULL)
    {
        return;
    }
    solve(root->left,ans);
    ans.push_back(root->data);
    solve(root->right,ans);
}
int sum(Node* root, int k) 
{ 
  
    // Your code here
    vector<int> ans;
    solve(root,ans);
    
    int sum = 0;
    for(int i=0;i<k;i++)
    {
     sum += ans[i];   
    }
    return sum;
    
} 
