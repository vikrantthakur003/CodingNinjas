#include<iostream>
using namespace std;
void SubSet(int arr[],int size,int Output[],int OutputSize)
{
	if(size==0)
	{
		for(int i=0;i<OutputSize;i++)
		{
			cout<<Output[i]<<" ";
		}
		cout<<endl;
		return;
	}
	
	SubSet(arr+1,size-1,Output,OutputSize); // Here we don't add the first Element
	int newArray[200] = {};
	
	for(int i=0;i<OutputSize;i++) //Here we add the all element in the newArray
	{
		newArray[i] = Output[i];
	}
	
	newArray[OutputSize] = arr[0]; // Here we add first element in newArray
	SubSet(arr+1,size-1,newArray,OutputSize+1); // call Function for rest element
}
int main()
{
	int arr[] = {15,20,12};
	int Output[200] = {};
	SubSet(arr,3,Output,0);
}
