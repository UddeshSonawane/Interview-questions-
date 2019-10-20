/*
Wipro recruitment test

Problem Statement: To print product of digits in a given number.

	Input : 2342
        Output : 48
        Explaination : 2*3*4*2=48
              
by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	long int number;
	cout<<"\nEnter a number : ";
	cin>>number;
	
	int x, product=1;
	while(1)
	{
		if(number<10)
		{
			product=product*number;
			break;
		}
		x=number%10;
		product=product*x;
		number=number/10;
	}
	
	cout<<"\nOUTPUT : "<<product;

return 0;
}

/*
Sample OUTPUT

Enter a number : 2342

OUTPUT : 48
*/
