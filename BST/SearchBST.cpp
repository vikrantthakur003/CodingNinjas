bool search(Node* root, int x) {
    // Your code here
    if(root==NULL)
    {
        return false;
    }
    
    if(root->data==x)
    {
        return true;
    }
    if(root->data <x)
    {
        bool right = search(root->right,x);
        if(right)
        {
            return true;
        }
    }
    else{
        bool left = search(root->left,x);
        if(left)
        {
            return true;
        }
    }
    
    return false;
}

