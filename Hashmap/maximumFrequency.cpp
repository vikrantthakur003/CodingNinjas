int maxRepeating(int *arr, int n, int k) {
	    // code here
	    map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        mp[arr[i]]++;
	    }
	    
	    int ans = 0;
	    int maxi = 0;
	    for(auto x : mp)
	    {
	        if(x.second > maxi)
	        {
	            ans = x.first;
	            maxi = x.second;
	        }
	    }
	    return ans;
	}
