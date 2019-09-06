//Factorial of a number

#include<iostream>
using namespace std;

int main()
{
	int num,fact=1;
	cout<<"\nEnter a number : ";
	cin>>num;
	
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"\nFactorial of a number is : "<<fact;
	
return 0;
}
