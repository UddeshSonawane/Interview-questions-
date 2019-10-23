/* wipro recruitment online test

Problem statement : Print letters retaining same position after reversing string.

		input :  adfgedw

			reverse string : wdegfda

          output : d      -> letter 'd' retained it's position

by Uddesh

*/

#include<iostream>
using namespace std;

int main()
{
	char str[20], strrev[20];
	cout<<"\nEnter a string : ";
	cin>>str;
	
	int i=0;
	while(str[i]!=NULL)
		i++;
		
	int len,key;
	len=i;
	
	if(len%2==0)
		key=len/2;
	else
		key=(len/2)+1;
	
	for(int i=0,j=len;i<len;i++,j--)
	{
		strrev[i]=str[j-1];
	}
	
	cout<<"\nInput string : "<<str;
	cout<<"\nOutput string : "<<strrev;
	
	int j=0,flag=0;
	while(key!=0)
	{
		if(str[j]==strrev[j])
		{
			cout<<"\nletter "<<str[j]<<" retained position";
			flag=1;
		}
		j++;
		key--;
	}
	
	if(flag==0)
	{
		cout<<"\n  :( Not a single letter retained the position";
	}
return 0;
}

/*
OUTPUT

Enter a string : adfgedw

Input string : adfgedw
Output string : wdegfda
letter d retained position
letter g retained position

--------------------------------

Enter a string : pattern

Input string : pattern
Output string : nrettap
letter t retained position

-------------------------------

Enter a string : system 

Input string : system
Output string : metsys
  :( Not a single letter retained the position

*/
