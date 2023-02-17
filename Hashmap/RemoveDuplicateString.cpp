string removeDuplicates(string str) {
	    // code here
	    string s ="";
	    unordered_map<char,bool> mp;
	    
	    for(int i=0;i<str.length();i++)
	    {
	        if(mp.count(str[i])>0)
	        {
	            continue;
	        }
	        mp[str[i]] = true;
	        s.push_back(str[i]);
	    }
	    return s;
	}
