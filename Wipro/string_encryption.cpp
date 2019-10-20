/* wipro recruitment online test

Problem statement : Character string encryption.

	explaination:  key=3
				if string contains a, then replace it by d
                                       b, by e
                                       c, by f, and so on

		input: abcdef
          output : defghi

by Uddesh

*/

#include<iostream>
using namespace std;

int main()
{
	char str1[20], str2[20];
	
	cout<<"\nEnter first string : ";
	cin>>str1;
	
	int i=0;
	char ch;
	
	while(str1[i]!='\0')
	{
		ch=str1[i];
		str2[i]=ch+3;
		i++;
	}

	cout<<"\n"<<str1<<"\n"<<str2;

return 0;
}

/*

OUTPUT

Enter first string : abcdef

abcdef
defghi


Enter first string : ABCD

ABCD
DEFG


Enter first string : XYZ

XYZ
[\]
*/
