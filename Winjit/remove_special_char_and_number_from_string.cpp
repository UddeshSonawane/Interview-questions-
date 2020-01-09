/*Winjit Technologies Campus recruitment 2020

input : alp@ha&b*%et   (characters + special characters in a string)
output : alphabet

solution by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	char str[20];
	cout<<"\nEnter a string : ";
	cin>>str;
	
	cout<<"\nInput String : "<<str;
	
	cout<<"\nOutput String : ";
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			cout<<str[i];
		}
		i++;
	}
	
return 0;
}

/*

OUTPUT

Enter a string : alp@ha&b*%et

Input String : alp@ha&b*%et
Output String : alphabet
-------------------------------------

Enter a string : asdfg#$%^we

Input String : asdfg#$%^we
Output String : asdfgwe

*/
