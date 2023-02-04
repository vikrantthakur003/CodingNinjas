#include<iostream>
using namespace std;

#define PI 3.14 // #define - define the variable for use everywhere in code


int i; // Global variable
void q()
{
	i++;
	cout<<i<<endl;
	i++;
}
void p()
{
	cout<<i<<endl;
	i++;
	q();
}
int main()
{
//  cout<<2*PI<<endl;	
 	i = 10;
 	cout<<i<<endl;
 	p();
 	cout<<i<<endl;
 	
}
