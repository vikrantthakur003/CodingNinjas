 void solve(vector<int>&nums,int s,int e,vector<int>&ans)
   {
       if(s>e)
       {
           return;
       }
       int mid = (s+e)/2;
       ans.push_back(nums[mid]);
       solve(nums,s,mid-1,ans);
       solve(nums,mid+1,e,ans);
   }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>ans;
        solve(nums,0,nums.size()-1,ans);
        return ans;
       
    }
