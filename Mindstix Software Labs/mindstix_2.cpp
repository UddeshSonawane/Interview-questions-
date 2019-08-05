/*Mindstix Software Labs

find the sum of divisors of all numbers from 1 to n in a single loop.

input : 3
output : 8

explaination: sum of divisors of 1 -> 1
              sum of divisors of 2 -> 1+2=3
              sum of divisors of 3 -> 1+3=4
              
              sum of divisors of all numbers from 1 to 3 -> 1+3+4=8
              
              
solution by Uddesh
*/

#include<iostream>
using namespace std;

void sum_of_divisors(int n)
{
	int sum=0,i=1,j=1;
	while(1)
	{
		//cout<<"\n*";
		if(j<=i)
		{
			if(i%j==0)
			{
				sum=sum+j;
				cout<<"\nFactor of "<<i<<" -> "<<j;
			}
			j++;
		}
		else
		{
			if(i>=n)
				break;
			else
			{
				i++;
				j=1;
			}
		}
	}
	cout<<"\nsum of divisors of all numbers from 1 to "<<n<<" -> "<<sum;	
}

int main()
{
	int n;
	cout<<"\nEnter a number : ";
	cin>>n;
	cout<<"\nThe number is : "<<n;
	sum_of_divisors(n);
return 0;
}

/*
Sample Output

Enter a number : 4

The number is : 4
Factor of 1 -> 1
Factor of 2 -> 1
Factor of 2 -> 2
Factor of 3 -> 1
Factor of 3 -> 3
Factor of 4 -> 1
Factor of 4 -> 2
Factor of 4 -> 4
sum of divisors of all numbers from 1 to 4 -> 15

*/
