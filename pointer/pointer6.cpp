#include<iostream>
using namespace std;
int main()
{
	int i = 10;
	int *p1 = &i;
	double a = 23.32;
	double *p2 = &a;
	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;
	
	int b = 12;
	int * p3 = &b;
	int** p4 = &p3; // Syntax of the pointer which store the address of other pointer
	cout<<p4<<endl;
	cout<<&p3<<endl;
	
	cout<<p3<<endl;
	cout<<*p4<<endl; // In case output is same
	
	cout<<b<<endl;
	cout<<*p3<<endl;
	cout<<**p4<<endl; // Firstly it goes p3 then goes b and print the value of b
	
	int x = 100;
	int *ptr = &x;
	int **ptr1 = &ptr;
	int y = (**ptr1)++ + 4; // if we change in pointer then change the original value
	cout<<x<<" "<<y<<endl;
}
