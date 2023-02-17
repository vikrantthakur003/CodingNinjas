// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int main() {
    unordered_map<string,int> mp;
    mp["abc"] = 1;
    mp["def"] = 2;
    mp["ghe"] = 2;
    
    // iterator 
    // itertor is a pointer and point the pair of map
    unordered_map<string,int> :: iterator it = mp.begin();
    while(it != mp.end())
    {
        cout<<"key "<<it->first<<" value "<<it->second<<endl;
        it++;
    }
    
    vector<int> ans;
    ans.push_back(12);
    ans.push_back(23);
    ans.push_back(34);
    ans.push_back(45);
    
    vector<int> :: iterator it1 = ans.begin();
    while(it1 != ans.end())
    {
        // iterator if a pointer and point the value of vector
        cout<<*it1<<endl;
        it1++;
    }
    
    unordered_map<string,int> :: iterator it2 = mp.find("abc");
    mp.erase(it2); // we pass the iterator in erase function 
    unordered_map<string,int> :: iterator it3 = mp.begin();

    while(it3 != mp.end())
    {
        cout<<"key "<<it3->first<<" value "<<it3->second<<endl;
        it3++;
    }
    return 0;
}
