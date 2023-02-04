#include<iostream>
using namespace std;
void Merge(int a[],int l,int mid,int r)
{
	int n1,n2,i,j,k;
	n1 = mid-l+1; // size of first array
	n2 = r-mid; // size of second array
	
	int arr1[n1],arr2[n2];
	
	for(int i=0;i<n1;i++) // first array ke element ko copy krna
	{
		arr1[i] = a[l+i]; 
	}
	
	for(int j=0;j<n2;j++) // second array ke element ko copy krna
	{
		arr2[j] = a[mid+1+j];
	}
	
	i = 0;
	j = 0;
	k = l;
	while(i<n1 && j<n2)
	{
		if(arr1[i]<=arr2[j])
		{
			a[k] = arr1[i];
			i++;
		}
		else{
			a[k] = arr2[j];
			j++;
		}
		k++;
	}
	
	while(i<n1)
	{
		a[k] = arr1[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k] = arr2[j];
		j++;
		k++;
	}
}
void MergeSort(int a[],int si,int ei)
{
	if(si>=ei)
	{
		return;
	}
	int mid = (si+ei)/2;
	MergeSort(a,si,mid); // here the array in two part
	MergeSort(a,mid+1,ei);
	
	Merge(a,si,mid,ei); // here merge function call for merge the two array
}
int main()
{
	int arr[] = {2,6,8,5,4,3};
	MergeSort(arr,0,5);
	
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
}
