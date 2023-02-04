#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<&a[0]<<endl;
	
	a[0] = 12;
	cout<<*a<<endl;
	cout<<a[0]<<endl;
	
	a[1] = 15;

	cout<<*(a+1)<<endl;
	cout<<a[1]<<endl;
	
	a[2] =11;
	cout<<2[a]<<endl;
	cout<<*(a+2)<<endl;
	
	
	int *p = &a[0];
	cout<<sizeof(p)<<endl; // pointer take 8 bytes size
	cout<<sizeof(a)<<endl; // a variables take index 0 address So a take 4 bytes memory
	
	// pointer take our address but a take the index 0 address
	cout<<&p<<endl;
	cout<<&a<<endl;
	
	p = p+1; // it is right. update the pointer address
	a = a+1; // But here a don't update . it is wrong
}
