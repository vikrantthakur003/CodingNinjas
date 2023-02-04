#include<iostream>
using namespace std;

void f(const int *p)
{
//	(*p)++; // ERROR because const pointer not change
}

void q(const int &a)
{
//	a++; // ERROR because const reference variable
}
int main()
{
	const int i = 12;
//	int *p = &i; // ydi koi variable const hai to normal pointer ko address nhi de skte
	
	const int *p = &i; // us pointer ko bhi const bnana hoga  
//	(*p)++; // ERROR because it is const pointer


	int j = 12;
	const *p1 = &j; // now we can't change using this variable
	 j++; // but we can change j variable 
	 cout<<*p1<<endl; // and here also change
	 cout<<j<<endl;
	
	int a = 15;
	int *p2 = &a;
	f(p2);
	q(a);
	
	int b = 14;
	int c = 15;
	int const *ptr = &b;
	ptr = &c; // ydi const pointer khud change ho skta hai prr jisko assign kr rha usko change nhi kr skte
	cout<<*ptr<<endl;
	cout<<c<<endl;
	
	
	int * const p3 = &b; // syntax to create const pointer 
	(*p3)++; // if we create const pointer then we can't change const pointer but change where the pointer point the value
	cout<<*p3<<endl;
//	p3 = &c; // Error because here we create the const pointer 



	int const *const p4 = &b; // here we create const variable and const pointer
//	(*p4)++; // Error we can't perform these task
// 	p4 = &c;
}
