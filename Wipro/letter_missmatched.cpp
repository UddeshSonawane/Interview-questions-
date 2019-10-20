/* wipro recruitment online test

Problem statement : To print mismatched letterfrom two strings.

explaination:  str1 : aasaa
               str2 : aaaaa
               
               output : mismatched letter s

by Uddesh

*/

#include<iostream>
using namespace std;

int main()
{
	char str1[20];
	char str2[20];
	
	cout<<"\nEnter first string : ";
	cin>>str1;
	
	cout<<"\nEnter second string : ";
	cin>>str2;
	
	int i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			break;
		}
		i++;
	}
	
	cout<<"\nLetter mismatched is ";
	cout<<"\nFirst string : "<<str1[i]<<" ||  second string : "<<str2[i];
return 0;
}


/*
OUTPUT

Enter first string : aaasaa

Enter second string : aaaaaa

Letter mismatched is 
First string : s ||  second string : a

*/
