#include<iostream>
using namespace std;

int Partition(int arr[],int si,int ei)
{
	int pivot = arr[ei];
	int i = si-1;
	
	for(int j=si;j<ei;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[ei]);
	return (i+1);
}
void QuickSort(int arr[],int si,int ei)
{
	if(si>=ei)
	{
		return;
	}
	int pi = Partition(arr,si,ei);
	QuickSort(arr,si,pi-1);
	QuickSort(arr,pi+1,ei);
}
int main()
{
	int arr[] = {19,5,21,45,10,55};
	QuickSort(arr,0,5);
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
}
