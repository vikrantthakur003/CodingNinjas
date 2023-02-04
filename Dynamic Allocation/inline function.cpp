#include<iostream>
using namespace std;

inline int max(int a,int b) // actually inline keyword send the body of the function where function is call.
{
	return (a>b) ? a:b;
}

int sum(int arr[],int n=5,int si=2) // here this is default value and we can give the default value only last most varibale
{
	int ans = 0;
	for(int i=si;i<n;i++)
	{
		ans += arr[i];
	}
	return ans;
}
int main()
{
	int i= 10;
	int j = 20;
	
	int k = max(i,j); // here inline keyword send the body of function but if the body is large then the compiler is not run the function
	cout<<k<<endl;
	
	
	int arr[20] = {1,2,3,4,5,6 };
	cout<<sum(arr)<<endl; // here not pass the value
	
	
}
