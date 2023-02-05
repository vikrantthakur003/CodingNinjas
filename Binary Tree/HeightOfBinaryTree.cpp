  int height(struct Node* node){
        // code here 
        if(node==0)
        {
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);
        
        return max(left,right)  +1 ;
    }
