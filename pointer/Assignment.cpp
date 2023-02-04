#include<iostream>
using namespace std;

void swap(char *x,char* y)
{
	char *t = x;
	x = y;
	y = t;
}
void Q(int z)
{
	z += z;
	cout<<z<<" ";
}
void P(int *y)
{
	int b = *y+2;
	Q(b);
	*y  = b-1;
	cout<<b<<" ";
}


int main()
{ 

	// problem -> 1
	int arr[] = {1,2,3,4};
	int *ptr = (arr+1);
	cout<<*arr + 9<<endl;
	
	// problem -> 2
	int arr1[5];
	int *p;
	p = arr1;
	*p = 10;
	p = &arr1[2];
	*p = 20;
	p--;
	*p = 30;
	p = arr1 + 3;
	*p = 40;
	p = arr1;
	*(p+4) = 50;
	for(int i=0;i<5;i++)
	{
		cout<<arr1[i]<<endl;
	}
	
	// problem -> 3
	char *p1;
	char c[] = "abcdefg";
	p1 = c;
	p1 += 5;
	cout<<p1<<endl;
	
	
	// problem ->4 
	char ch[20];
	int i;
	for(int i=0;i<10;i++)
	{
		*(ch+i) = 65+i;
	}
	cout<<ch<<endl;
	
	// problem ->5
	char *x = "leetcode";
	char *y = "gfg";
	swap(x,y);
	
	cout<<x<<" "<<y<<" ";
	
	char *t = x;
	x = y;
	y =t;
	cout<<x<<" "<<y<<endl;
	
	//problem ->6 
	float ch1[]=   {12.4,15.3,90.5,10.0};
	float* ptr1 = &ch1[0];
	float* ptr2 = ptr1+3;
	
	cout<<ptr2-ptr1<<endl;
	cout<<*ptr2<<endl;
	
	// problem -> 7
	char str[]="ABCD";
	for(int i=0;str[i]!='\0';i++)
	{
		cout<<str[i]<<" "<<*(str)+i<<" "<<*(i+str)<<i[str];
	}
	cout<<endl;
	
	
	// problem -> 8
	int a1 = 5;
	P(&a1);
	cout<<a1<<endl;
	
	// problem -> 9
	int ***r,**q,*s,j=8;
	s = &j;
	(*s)++;
	q = &s;
	(**q)++;
	r=&q;
	cout<<*s<<" "<<**q<<" "<<***r<<endl;
	
	
	// problem ->10
	
	
}


