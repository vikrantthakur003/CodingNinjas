void solve(Node *root,int k1,int k2,vector<int> &ans)
  {
      if(root==NULL)
      {
          return;
      }
      if(root->data >=k1 && root->data <= k2)
      {
          ans.push_back(root->data);
      }
      solve(root->left,k1,k2,ans);
      solve(root->right,k1,k2,ans);
  }
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here   
        vector<int> ans;
        solve(root,low,high,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
