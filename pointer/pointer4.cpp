#include<iostream>
using namespace std;
int main()
{
	int a[] = {1,2,3,4};
	char ch[] = "abc";
	
	cout<<a<<endl; // In Integer array 'a' print the index 0 address
	cout<<ch<<endl; // But in Character array 'ch' print the content of ch array
	
	int *p = &a[0];
	char *p1 = &ch[0];
	
	cout<<p<<endl; // In pointer print the address of index 0 
	cout<<p1<<endl; // In character pointer print the content of array not print the adress
	
	cout<<&ch<<endl;
	
	
	char ch1 = 'a';
	char *p2 = &ch1;
	cout<<ch1<<endl;
	cout<<p2<<endl; // In Character variable pointer print the first content of character then print garbage till then it find the '/0' null
	 
	 
	 char s[] = "hello";
	 char *p3 = s;
	 cout<<s[0]<<" "<<p3[0]<<endl;
	 
	 char ch2 = 'a';
	 char *p4 = &ch2;
	 ch2++;
	 cout<<*p4<<endl;
}
