#include<iostream>
using namespace std;

bool sortedArray(int arr[],int size)
{
	if(size==0 || size==1)
	{
		return true;
	}
	
	if(arr[0]>arr[1])
	{
		return false;
	}
	
	bool isSorted = sortedArray(arr+1,size-1);
	if(isSorted)
	{
		return true;
	}
	return false;
}
int main()
{
	int arr[] = {1,2,3,4,5};
	cout<<sortedArray(arr,5);
}
