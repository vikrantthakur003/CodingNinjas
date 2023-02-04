#include<iostream>
using namespace std;

int BinarySearch(int arr[],int si,int ei,int key)
{
	if(ei>=si)
	{
	int mid = (si+ei)/2;
	if(arr[mid]==key)
	{
		return mid;
	}
	else if(arr[mid]>key)
	{
	return BinarySearch(arr,si,mid-1,key);
	}
	else if(arr[mid]<key){
	return BinarySearch(arr,mid+1,ei,key);
	}
}
	return -1;
}
int main()
{
	int arr[] = {2,3,4,5,6,8};
	int key = 10;
	cout<<BinarySearch(arr,0,5,key);
}
