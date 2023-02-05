Node* solve(int in[],int pre[],int &preOrderIndex,int InorderStart,int InorderEnd,int n)
    {
        if(preOrderIndex >= n || InorderStart > InorderEnd)
        {
            return NULL;
        }
        int element = pre[preOrderIndex++];
        Node* root = new Node(element);
       
       int posi = InorderStart;
       for(;posi<InorderEnd;posi++)
       {
           if(in[posi]==element)
           {
               break;
           }
       }
        
        
        root->left = solve(in,pre,preOrderIndex,InorderStart,posi-1,n);
        root->right = solve(in,pre,preOrderIndex,posi+1,InorderEnd,n);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preOrderIndex = 0;
        Node*ans = solve(in,pre,preOrderIndex,0,n-1,n);
        return ans;
    }
