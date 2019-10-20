/* wipro recruitment online test

Problem statement : Binary to decimal conversion

by Uddesh

*/

#include<iostream>
using namespace std;

int power(int n)
{
//cout<<"-";
	int val=1;
	if(n==0)
		return 1;
	else
	{
		while(n!=0)
		{
			val=val*2;
			n--;
		}
		return val;
	}	
}

int main()
{
	int binum, cpybinum;
	cout<<"\nEnter binary number : ";
	cin>>binum;
	cpybinum=binum;
	int i=0, decimal=0, x, powerval;
	
	while(binum>9)
	{
		x=binum%10;
		powerval=power(i);
		decimal=decimal+(x*powerval);
		binum=binum/10;
		i++;
	}

	powerval=power(i);
	decimal=decimal+(binum*powerval);
	
	cout<<"\nBinary number : "<<cpybinum;
	cout<<"\nDecimal number : "<<decimal;
		
return 0;
}

/*
OUTPUT

Enter binary number : 10

Binary number : 10
Decimal number : 2


Enter binary number : 101

Binary number : 101
Decimal number : 5


Enter binary number : 111

Binary number : 111
Decimal number : 7
*/
