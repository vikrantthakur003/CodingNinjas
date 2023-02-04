#include<iostream>
using namespace std;

void SubsetSum(int arr[],int size,int k,int Output[],int OutputSize)
{
	if(size==0)
	{
	  if(k==0)
	{
		for(int i=0;i<OutputSize;i++)
		{
			cout<<Output[i]<<" ";
		}
		cout<<endl;
		return;
    }
    else{
    	return;
	}
}
	SubsetSum(arr+1,size-1,k,Output,OutputSize);
	
	int newArray[200] = {};
	for(int i=0;i<OutputSize;i++)
	{
		newArray[i] = Output[i];
	}
	newArray[OutputSize] = arr[0];
	
	SubsetSum(arr+1,size-1,k-arr[0],newArray,OutputSize+1);
}

int main()
{
	int arr[] = {5,12,3,17,1,18,15,3,17};
	int k = 6;
	int Output[200]= {};
	SubsetSum(arr,9,k,Output,0);
}
