/* wipro recruitment online test

Problem statement : To check total number of special characters in a string.

by Uddesh

*/

#include<iostream>
using namespace std;

int main()
{
	char str1[20];
	
	cout<<"\nEnter first string : ";
	cin>>str1;
	
	int i=0, count=0;
	char ch;
	
	while(str1[i]!='\0')
	{
		ch=str1[i];
		
		if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9')
		{
			//dummy loop
		}
		else
		{
			count++;
			cout<<"\n"<<ch;
		}	
		i++;
	}

	cout<<"\nNumber of special characters : "<<count;

return 0;
}

/*

OUTPUT

Enter first string : adsASD@#$.COM

@
#
$
.
Number of special characters : 4

*/
