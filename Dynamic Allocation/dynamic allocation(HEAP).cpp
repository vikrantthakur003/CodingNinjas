#include<iostream>
using namespace std;

int main()
{
	// Generally we have two types of memory Stack and Heap. Stack is called static memory and Heap is called Dynamic memory
	int *p = new int; // we allocate the memory in dyanmic(HEAP) using 'new' keyword
	*p = 10;
	cout<<*p<<endl;
	
	double *p1 = new double; // In case pointer p1 store in Stack and 'new double' memory allocate in Heap
	*p = 1221.232;
	
	char * p2 = new char;
	*p2 = 'A';
	cout<<*p2<<endl;
	
/*	
   This is not right way to allocate the size of array because it is store in Stack so it have limited memory
	int n;
	cin>>n;
	int arr[n];	
*/

   	int *pa =  new int[100]; // ye kre ya too hum
	    
/*
   	int n;
   	cin>>n;
   	int *pa1 = new int[n] // ya phir hum ese size de array ko 	
*/
	
	// In dynamic memory(HEAP) not release automatically. It release manually using 'delete' keyword
	
	int *q = new int;
	delete q; // In case q is not delet actully delete the memory of new keyword(int)
	
	*q = 10; // we again access q pointer
	cout<<*q<<endl;
	
	int *pa1 = new int[100];
	delete []pa; // Syntax delete the memory of array
   	
}
