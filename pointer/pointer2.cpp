#include<iostream>
using namespace std;

int main()
{ 
/*
// 	problem -> 1 which variables gives the address of b
	int b = 10;
	int *a = &b;
	cout<<a<<endl; // a pointer gives the address of b
	
	// problem -> 2 Syntax of gives the address
	int i = 12;
	int *p = &i;
	cout<<p<<endl;
	cout<<&i<<endl;
	
	// problem -> 3 Proper declaration of pointer
	int j = 12;
	int *ptr = &j;
	cout<<*ptr<<endl; // It gives the value of variables b
	
	// problem -> 4 what will be the output
	float f = 10.5;
	float q = 2.5;
	float *p1 = &f;
	(*p1)++;
	*p1 = q;
	cout<<*p1<<" "<<f<<" "<<q<<endl; // output = 2.5 2.5 2.5
	
	// problem -> 5 what will be the output
	int *p2 = 0; // Output = ERROR because pointer only take the address not take the value
	int d =10;
	*p2 =d;
	cout<<*p2<<endl; 
	
	*/
	
	// problem ->6  what will be the output
	int a = 7;
	int *c = &a;
	c = c+1;
	cout<<a<<" "<<*c<<endl;
	
	
	
	
	
}
