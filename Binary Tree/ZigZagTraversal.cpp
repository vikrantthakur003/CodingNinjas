 vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> result;
    	bool leftToright = true;
    	queue<Node*> q;
    	q.push(root);
    	
    	while(q.size() != 0)
    	{
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	   for(int i=0;i<size;i++)
    	   {
    	       Node* front = q.front();
    	       q.pop();
    	       
    	       int index = leftToright ? i : size-i-1;
    	       ans[index] = front->data;
    	       
    	       if(front->left != NULL)
    	       {
    	           q.push(front->left);
    	       }
    	       if(front->right != NULL)
    	       {
    	           q.push(front->right);
    	       }
    	   }
    	   leftToright =! leftToright;
    	   for(auto i:ans)
    	   {
    	       result.push_back(i);
    	   }
    	}
    	
    	return result;
    }
