#include<iostream>
using namespace std;

int main()
{
	string str = "vikrant";
	cout<<str<<endl;
	
	string *s = new string; // Dynamic create String in Heap
	*s = "def";
	cout<<s<<endl;
	cout<<*s<<endl;
	
	string s1;
	cout<<"Enter the String : ";
//	cin>>s1; // here we are not take space string ex = coding ninja. Here it print only coding.
//	getline(cin,s1); // here we are take space string
//	cout<<s1<<endl;
	
	s1 = "defdef"; //change the runtime string 
	cout<<s1<<endl;
	cout<<s1[0]<<endl;
	s1[0] = 'v'; // change the first index of string
	cout<<s1<<endl;
	
	string s2 = str+s1; //concat two string
	cout<<s2<<endl;
	
	str += s1; //concat krke pheli wali string me dal diya
	cout<<str<<endl;  
	
	cout<<s1<<endl;
	cout<<s1.size()<<endl; // size of the string
	cout<<s1.substr(3)<<endl; // return the part of the string which is start index 3
	cout<<s1.substr(2,3)<<endl; // return the string which is start 2 index and length 3
	cout<<s1.find("def"); // return the index which is start 'def'
}
