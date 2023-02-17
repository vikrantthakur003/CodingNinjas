 int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> mp;
        
        int cnt  = 0;
        for(int i=0;i<n;i++)
        {
            int b = k-arr[i];
            if(mp[b])
            {
                cnt = cnt + mp[b];
            }
            mp[arr[i]]++;
        }
        return cnt;
    }
