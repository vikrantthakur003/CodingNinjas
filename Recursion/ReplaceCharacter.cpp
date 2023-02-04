#include<iostream>
using namespace std;

void ReplaceCharacter(char ch[],char c,char key)
{
	if(ch[0]=='\0')
	{
		return;
	}
	if(ch[0] == c)
	{
		ch[0] = key;
	}
	return ReplaceCharacter(ch+1,c,key);
}
int main()
{
	char ch[] = "abacdcbda";
	char c = 'a';
	char key = 'x';
	ReplaceCharacter(ch,c,key);
	cout<<ch;
}
