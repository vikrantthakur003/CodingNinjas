  vector<int> removeDuplicate(int A[], int N) {
        vector<int> ans;
        unordered_map<int,bool> mp;
        for(int i=0;i<N;i++)
        {
            if(mp.count(A[i])>0)
            {
                continue;
            }
            mp[A[i]] = true;
            ans.push_back(A[i]);
        }
        return ans;
    }
