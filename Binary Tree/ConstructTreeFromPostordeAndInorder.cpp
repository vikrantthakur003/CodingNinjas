Node* solve(int in[],int post[],int &postIndex,int Instart,int Inend)
{
    if(postIndex<0 || Instart > Inend)
    {
        return NULL;
    }
    int element = post[postIndex--];
    Node* root = new Node(element);
    
    int posi = Instart;
    for(;posi<Inend;posi++)
    {
        if(in[posi]==element)
        {
            break;
        }
    }
    
    root->right =  solve(in,post,postIndex,posi+1,Inend);
    root->left = solve(in,post,postIndex,Instart,posi-1);
    
    return root;
}
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int postIndex = n-1;
    Node* ans = solve(in,post,postIndex,0,n-1);
    return ans;
}

