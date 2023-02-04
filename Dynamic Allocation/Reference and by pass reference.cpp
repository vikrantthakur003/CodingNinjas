#include<iostream>
using namespace std;

void increment(int &x)
{
	x++;
}

void f(int a,int &b,int c)
{
	a++;
	b++;
	c++;
}
int main()
{
	int i = 10;
	int &j = i; // reference variable j means not create memory for j it using memory of variable i
	i++; // now if change in i then also change in J variable
	cout<<j<<endl;
	j++; // If change J variable then also change in I variable
	cout<<i<<endl;
	
	int k = 20;
	j = k; // here variable i and j change 
	cout<<i<<endl;
	cout<<j<<endl;
	
	int x = 50;
	cout<<x<<endl;
	increment(x); // we are pass reference variable then change in original variable OR not pass reference variable not change in original varoiable
	cout<<x<<endl;
	
	
	int a = 10;
	int b = 6;
	int &c = a;
	f(a,b,c); // jiska reference pass krenge sirf uski hi value change hoyegi
	cout<<a<<" "<<b<<" "<<c<<endl; 
}
