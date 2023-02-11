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
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    vector<int> arr;
    inorder(root,arr);
    int i = 0;
    int j = arr.size()-1;
    
    while(i<j)
    {
        int sum = arr[i] + arr[j];
        if(sum==target)
        {
            return 1;
        }
        else if(sum > target)
        {
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
       
    }
