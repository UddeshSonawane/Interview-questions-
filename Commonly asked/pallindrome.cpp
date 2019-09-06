#include<iostream>
using namespace std;

int main()
{
	 array[10];
	int len=0,flag=0;
	cout<<"\nEnter string : ";
	cin>>array;
	while(array[len]!=NULL)
	{
		len++;
	}
	cout<<"\nLength of string : "<<len;
	
	for(int i=0,j=len;i<(len/2);i++,j--)
	{
		if(array[i]!=array[j])
		{
			flag=1;
			break;
		}
	}
	
	if(flag==1)
	{
		cout<<"\nString is not pallindrome";
	}
	else
		cout<<"\nString is pallindrome";
	
return 0;
}
