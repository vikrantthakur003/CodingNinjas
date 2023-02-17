#include <bits/stdc++.h> 

int ZeroPairSum(int n, vector<int> arr){
    // Write your code here
    int cnt = 0;
    unordered_map<int,int> mp;

    for(int i=0;i<arr.size();i++)
    {
        int b = -arr[i];
        if(mp[b])
        {
            cnt += mp[b];
        }
       mp[arr[i]]++;
    }
    return cnt;

}
