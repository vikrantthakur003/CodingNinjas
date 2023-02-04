#include<iostream>
using namespace std;

void print(int*p)
{
	cout<<*p<<endl;
}

void Increment(int *p)
{
	p = p+1;
}

void IncrementPointer(int *p)
{
	(*p)++;
}

int sum(int *num,int size)
{
	int ans =0;
	for(int i=0;i<size;i++)
	{
		ans += num[i];
	}
	return ans;
}
int main()
{
	int a = 20;
	int *p = &a;
	print(p);
	
	cout<<*p<<endl;
	Increment(p);
	cout<<*p<<endl; // it is not change because we are passing the copy of pointer to the Increment function 
	
	cout<<*p<<endl;
	IncrementPointer(p);
	cout<<*p<<endl; // It is change because we are passing the copy of pointer but change in original pointer using IncrementPointer function
	
	int num[5] = {1,2,3,4,5};
	cout<<sum(num,5)<<endl; // we can pass array as a pointer ex. sum function
	cout<<sum(num+2,3); // we can pass part of array as a pointer 
	
}

