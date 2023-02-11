 int minimum(Node* root)
    {
        if(root==NULL)
        {
            return INT_MAX;
        }
        
        int left = minimum(root->left);
        int right = minimum(root->right);
        
        return min(root->data ,min(left,right));
    }
    int maximum(Node* root)
    {
        if(root==NULL)
        {
            return INT_MIN;
        }
        
        int left = maximum(root->left);
        int right = maximum(root->right);
        
        return max(root->data ,max(left,right));
    }
    bool isBST(Node* root) 
    {
        // Your code here
        if(root==NULL)
        {
            return true;
        }
        
        int leftMax = maximum(root->left);
        int rightMin = minimum(root->right);
        bool output = (root->data > leftMax) && (root->data <= rightMin);
    
        bool left = isBST(root->left);
        bool right = isBST(root->right);
        
        if(output && left && right)
        {
            return true;
        }
        return false;
    }
