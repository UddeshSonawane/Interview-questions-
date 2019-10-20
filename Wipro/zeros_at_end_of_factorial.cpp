/*
Wipro Online recruitment test

Problem Statement : To check number of zeros at the end of factorial of a number

by Uddesh

*/

#include<iostream>
using namespace std;

long int factorial(int x)
{
	long int y=1;
	while(x!=1)
	{
		y=y*x;
		x--;
	}
	
return y;
}

int main()
{

	int num;
	cout<<"\nEnter a number :";
	cin>>num;
	
	long int fact;
	fact=factorial(num);
	
	cout<<"\nFactorial of a number is : "<<fact;
	
	/*
	Logic to check zeros at the end.
	find mod 10 till we get 0 as remainder. any other than 0, then stop
	*/
	
	int count_zero=0;
	int rem;

	while(1)
	{
		rem=fact%10;
		if(rem==0)
		{
			count_zero++;
		}
		else
			break;
			
		fact=fact/10;
	}
	
	cout<<"\nNumber of zeros at the end of factorial of a number : "<<count_zero;
return 0;
}

/*
OUTPUT

Enter a number :20

Factorial of a number is : 2432902008176640000
Number of zeros at the end of factorial of a number : 4


Enter a number :5

Factorial of a number is : 120
Number of zeros at the end of factorial of a number : 1

*/
