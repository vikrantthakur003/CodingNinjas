Node* CreateBST(int pre[],int s,int e)
    {
        if(s>e)
        {
            return NULL;
        }
        int mid = (s+e)/2;
        Node* root = new Node(pre[mid]);
        root->left = CreateBST(pre,s,mid-1);
        root->right = CreateBST(pre,mid+1,e);
        
        return root;
    }
    Node* post_order(int pre[], int size)
    {
        //code here
        sort(pre,pre+size);
        int s =  0;
        int e = size-1;
        
       Node* root= CreateBST(pre,s,e);
       return root;
    }
