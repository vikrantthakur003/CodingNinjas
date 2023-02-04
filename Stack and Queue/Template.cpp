#include<iostream>
using namespace std;
// template <typename T> // here compiler set datatype T is which datatype set with object
template <typename T, typename V>

class Pair{
	T x;
//	T y;
	V y;
	
	public:
	void setX(T x)
	{
		this->x = x;
	}
	
	T getX()
	{
		return x;
	}
	
	void setY(V y)
	{
		this->y = y;
	}
	
	V getY()
	{
		return y;
	}
};
int main()
{
/*	Pair<int> s1;
	s1.setX(10);
	cout<<s1.getX()<<endl;
	
	Pair<double> s2;
	s2.setY(100.43);
	cout<<s2.getY()<<endl;
	
	Pair<char> s3;
	s3.setX('A');
	cout<<s3.getX()<<endl;
*/

/*	Pair<int,double> s1;
	s1.setX(100);
	s1.setY(100.54);
	
	cout<<s1.getX()<<" "<<s1.getY()<<endl;
*/
	Pair<Pair<int,int>,double> s1;
	s1.setY(20.20);
	cout<<s1.getY()<<endl;
	
	Pair<int,int> p1;
	p1.setX(10);
	p1.setY(20);
	s1.setX(p1);
	cout<<s1.getX().getX()<<endl;
	cout<<s1.getX().getY()<<endl;
}
