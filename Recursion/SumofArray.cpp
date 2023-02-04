#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size)
{
	static int sum =  0;
	if(size==0)
	{
		return 0;
	}
	
	sum += arr[0];
	sumOfArray(arr+1,size-1);
	return sum;
}
int main()
{
	int arr[] = {12,12,12,12,12,12};
	cout<<sumOfArray(arr,6);
}
