#include<iostream>
using namespace std;

void Permutation(string s,int l,int r)
{
	int i;
	if(l==r)
	{
		cout<<s<<endl;
	}
	else{
		for(i=l;i<r;i++)
		{
			swap(s[l],s[i]);
			Permutation(s,l+1,r);
			swap(s[l],s[i]);
		}
	}
}
int main()
{
	string s = "cba";
	Permutation(s,0,3);
}
