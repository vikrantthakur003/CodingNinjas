 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_map<int,int> mp;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(int j=0;j<m;j++)
        {
            if(mp.find(b[j]) != mp.end())
            {
                cnt++;
                mp.erase(b[j]);
            }
        }
        return cnt;
    }
