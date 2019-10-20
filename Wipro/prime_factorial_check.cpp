/* wipro recruitment online test

Problem statement : To check whether factorial of a number is prime or not. If it is prime then print the number of zeros 
                    occuring at the end of number.

explaination:  if factorial is 12300,  then output is 2
               if factorial is 102, then output is 0 

by Uddesh

*/

#include<iostream>
using namespace std;

int factorial(int x)
{
	int fact=1;
	
	while(x!=0)
	{
		fact=fact*x;
		x--;
	}
	return fact;
}

int main()
{
	int num;
	cout<<"\nEnter a number : ";
	cin>>num;
	
	int fact;
	fact=factorial(num);
	cout<<"\nFactorial of "<<num<<" is "<<fact;
	
	int rem, count=0, flag=0;
	
	for(int i=1;i<fact;i++)
	{
		rem=fact%i;
		if(rem==0)
		{
			count++;
		}
		if(count>=2)
		{
			flag=1;
			break;
		}
	}
	
	if(flag==0)
	{
		cout<<"\nThe factorial is prime";
	}
	else
		cout<<"\nThe factorial is not prime";
	
return 0;
}


/*

OUTPUT

Enter a number : 4

Factorial of 4 is 24
The factorial is not prime

*/
