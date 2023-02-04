#include<iostream>
#include<vector>
using namespace std;

int main()
{
//	vector<int> *vc = new vector<int>(); // Dynamic vector
	vector<int> v;
	v.push_back(12);
	v.push_back(23);
	v.push_back(34);
	
//	v[1] = 100; // use for only update value and get the value
/*	cout<<v[0]<<endl;
	cout<<v[1]<<endl;
	
*/

	v.pop_back(); //delete the value from back side of the vector
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;	
	}	
	cout<<v.at(1)<<endl; // return value at index 1
	cout<<v.size()<<endl; // size of the vector
}
