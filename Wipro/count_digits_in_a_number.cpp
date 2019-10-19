/*
Wipro Online recruitment test

Problem Statement : To count total number of digits in a given number.

by Uddesh

*/

#include<iostream>
using namespace std;

int main()
{
	long int num;
	cout<<"\nEnter a number : ";
	cin>>num;
	
	int count;
	
	while(1)
	{
		num=num/10;
		count++;
		if(num>=0 && num<=9)
		{
			break;
		}
	}
	
	cout<<"\nTotal number of digits : "<<count+1;

return 0;
}

/*
OUTPUT

Enter a number : 10

Total number of digits : 2


Enter a number : 100

Total number of digits : 3


Enter a number : 565656

Total number of digits : 6
*/
