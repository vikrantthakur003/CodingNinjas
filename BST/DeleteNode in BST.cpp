Node *deleteNode(Node *root, int X) {
    // your code goes here
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data > X)
    {
        root->left = deleteNode(root->left,X);
    }
    else if(root->data < X)
    {
        root->right = deleteNode(root->right,X);
    }
    else{ // if(root->data == x)
        if(root->left==NULL && root->right==NULL)
        {
            return NULL;
        }
        else if(root->left==NULL)
        {
            Node* rightRoot = root->right;
            root->right = NULL;
            delete(root);
            return rightRoot;
        }
        else if(root->right==NULL)
        {
            Node* leftRoot = root->left;
            root->left = NULL;
            delete(root);
            return leftRoot;
        }
        else{
            Node* minNode = root->right;
            while(minNode->left != NULL) // minimum elemtent hmesa left me hota hai
            {
                minNode = minNode->left;
            }
            int minRight = minNode->data;
            root->data = minRight;
            
            root->right = deleteNode(root->right,minRight);
            return root;
        }
    }
    return root;
}
