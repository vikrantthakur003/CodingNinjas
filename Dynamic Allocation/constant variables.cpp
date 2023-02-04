#include<iostream>
using namespace std;

int main()
{
	const int i =10; // int const i =10 (right syntax)
	cout<<i<<endl;
//	i = 20; // if we create const variable then we can't change or override the value of const variable
	
	
	int j = 12;
	const int &k = j;
//	k++; // In case if we declare const variable then we can't change 
	j++; // But here j is not const variable so here we can change
	cout<<k<<endl; // and k is reference variable of j so if we change in j then automatically change in k k
	
	const int a = 12;
//	int &b =a; // ydi humne ek variable ko const bna diya tb hum reference variable se bhi usko change nhi kr skte
//	b++; // error  So const variable ka reference nhi de skte nhi too hme reference variable ko bhi const bnana hoga
	cout<<a<<endl;
}
