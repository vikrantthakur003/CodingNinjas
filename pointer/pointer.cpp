#include<iostream>
using namespace std;

int main()
{
//	int i  = 12;
//	int *p = &i;
//	
//	cout<<p<<endl;
//	cout<<&i<<endl;
//	
//	cout<<i<<endl;
//	cout<<*p<<endl;
//	
//	i = 13;
//	cout<<i<<endl;
//	cout<<*p<<endl;
//	
//	*p = 15;
//	cout<<i<<endl;
//	
//	int *ptr = 0;
//	cout<<ptr<<endl;
//	
	int j = 20;
	int *p1 = &j;
	
	j++;
	cout<<*p1<<endl;
	cout<<j<<endl;
	
	(*p1)++;
	cout<<j<<endl;
	cout<<*p1<<endl;

}
