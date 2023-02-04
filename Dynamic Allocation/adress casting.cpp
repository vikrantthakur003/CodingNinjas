#include<iostream>
using namespace std;

void update(int *a)
{
	*a = 610%255;
}
int main()
{
	int a = 65;
	char c  = a; // This is called address typecasting or implicit typecasting. When we store any type on other datatype.
	cout<<c<<endl;
	
	int *p =&a;
	char *q = (char*)p; // This is called explicit typecasting.
	
	cout<<*p<<endl;
	cout<<*q<<endl;
	cout<<*(q+1)<<endl;
	cout<<*(q+2)<<endl;
	cout<<*(q+3)<<endl;
	
	char ch = 'A';
	int i = ch;
	cout<<i<<endl;
	
	char *ptr = &ch;
	int *ptr1= (int*)ptr;
	cout<<*ptr<<endl;
	
	
//	char ch1 = 'A';
//	update((int*)&ch);
//	
//	cout<<ch1<<endl;
	
}
