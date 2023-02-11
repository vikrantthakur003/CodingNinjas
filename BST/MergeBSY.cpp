 void inorder(Node* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    vector<int> mergeBST(vector<int> &a,vector<int> &b)
    {
        int i = 0;
        int j = 0;
        
        vector<int> ans(a.size() + b.size());
        int k = 0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]<b[j])
            {
                ans[k++] = a[i++];
            }
            else{
                ans[k++] = b[j++];
            }
        }
        
        while(i<a.size())
        {
            ans[k++] = a[i++];
        }
        while(j<b.size())
        {
            ans[k++] = b[j++];
        }
        
        return ans;
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int> bst1;
       vector<int> bst2;
       
       inorder(root1,bst1);
       inorder(root2,bst2);
       
       vector<int> mergeArray  = mergeBST(bst1,bst2);
       return mergeArray;
    }
