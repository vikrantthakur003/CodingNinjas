 int ans = 0;
    int height(Node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        
        return max(left,right) + 1;
    }
    int diameter(Node* root) {
        // Your code here
       
        if(root==NULL)
        {
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        
        if(left+right+1 > ans)
        {
            ans = left+right+1;
        }
        diameter(root->left);
        diameter(root->right);
        
        return ans;
    }
