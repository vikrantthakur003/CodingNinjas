#include<iostream>
using namespace std;

int AllIndexRecursive(int a[],int size,int x,int Output[])
{
	if(size==0)
	{
		return 0;
	}

	int smallAns = AllIndexRecursive(a+1,size-1,x,Output);
	if(a[0]==x)
	{
		for(int i=smallAns-1;i>=0;i--)
		{
			Output[i+1] = Output[i]+1;
		}
		Output[0] = 0;
		smallAns++;
	}
	else{
		for(int i=smallAns-1;i>=0;i--)
		{
			Output[i] = Output[i]+1;
		}
	}
	return smallAns;
}

void AllIndex(int a[],int size,int x)
{
	int Output[size];
	int n = AllIndexRecursive(a,size,x,Output);
	
	for(int i=0;i<n;i++)
	{
		cout<<Output[i]<<" ";
	}
}

int main()
{
	int x;
	cout<<"Enter the Element : ";
	cin>>x;
	int a[] = {23, 29 ,30 ,21 ,16, 10, 29, 27, 19, 12, 30, 20, 10, 27, 30, 24, 20, 27, 22, 16, 27, 24, 24 ,11, 12, 29};
	AllIndex(a,26,x);
	
}
