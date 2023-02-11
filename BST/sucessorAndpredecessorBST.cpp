void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
    if(root==NULL)
    {
        return;
    }
    
    if(root->key==key)
    {
        if(root->left!=NULL)
        {
            Node* temp1 = root->left;
            while(temp1->right)
            {
                temp1 = temp1->right;
            }
            pre = temp1;
        }
        if(root->right!= NULL)
            {
                Node* temp2 = root->right;
                while(temp2->left)
                {
                    temp2 =  temp2->left;
                }
                suc = temp2;
            }
            return;
    }
    if(root->key > key)
    {
        suc = root;
        findPreSuc(root->left,pre,suc,key);
    }
    else{ // root->data < key
        pre = root;
        findPreSuc(root->right,pre,suc,key);
    }

}
