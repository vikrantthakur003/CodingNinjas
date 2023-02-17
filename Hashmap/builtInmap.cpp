// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
using namespace std;


int main() {
   unordered_map<string,int> mp;
   
   // insert
   pair<string,int> p("abc",1);
   mp.insert(p);
   mp["abc"] = 1;
   
   // find or access
   cout<<mp["abc"]<<endl;
   cout<<mp.at("abc")<<endl;
   cout<<mp.size()<<endl;
   
  // cout<<mp.at("def")<<endl; // this is throw exception key is present
   cout<<mp["def"]<<endl; // here not throw exception it create the key and return value 0
   cout<<mp.size()<<endl;
   
   cout<<mp.count("def")<<endl; // here it create with value 1
   if(mp.count("def")>0)
   {
       cout<<"def is present"<<endl;
   }
   
  mp.erase("abc");
  if(mp.count("abc")>0)
  {
      cout<<"abc is present"<<endl;
  }
  else{
      cout<<"abc is not present"<<endl;
  }
  
  cout<<"Size of the map "<<mp.size()<<endl;
//   cout<<mp.empty()<<endl;
    
    // acces using for loop
    for(auto x:mp)
    {
        string str = x.first;
        int cnt = x.second; 
        cout<<str<<" "<<cnt<<endl;
    }
    return 0;
}
