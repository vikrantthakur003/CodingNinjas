void solve(Node* root, vector<int> &ans){

        if(root==NULL)

          return;

        solve(root->left,ans);

        ans.push_back(root->data);

        solve(root->right,ans);

    }

    bool isBST(Node* root) 

    {

        // Your code here

        vector<int> ans;

        solve(root,ans);

        for(int i=0;i<ans.size()-1;i++){

            if(ans[i]>ans[i+1]){

                return 0;

            }

        }

        return 1;

        

    }
