/* wipro recruitment online test

Problem statement : To print prime numbers in given range,
                    along with their count,
                    smallest prime number in range,
                    largest prime number in range
                    sum of smallest and largest prime numbers.

by Uddesh

*/


#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout<<"\nEnter lower limit : ";
	cin>>num1;
	
	cout<<"\nEnter upper limit : ";
	cin>>num2;
	
	int rem, k=0, arr[20];
	
	for(int i=num1;i<=num2;i++)
	{
		int flag=0, count=0;
		for(int j=1;j<=i;j++)
		{
			rem=i%j;
			if(rem==0)
			{
				count++;
			}
			if(count>2)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			arr[k]=i;
			k++;
		}
	}

	cout<<"\nTotal prime numbers in the range "<<num1<<" to "<<num2<<" :-> "<<k;
	cout<<"\nPrime numbers are : ";
	for(int p=0;p<k;p++)
	{
		cout<<arr[p]<<" ";
	}
	
	cout<<"\nSmallest prime number : "<<arr[0];
	cout<<"\nGreatest prime number : "<<arr[k-1];
	cout<<"\nAddition of smallest and greatest prime numbers : "<<arr[0]+arr[k-1];
	
return 0;
}

/*
OUTPUT

Enter lower limit : 5

Enter upper limit : 20

Total prime numbers in the range 5 to 20 :-> 6
Prime numbers are : 5 7 11 13 17 19 
Smallest prime number : 5
Greatest prime number : 19
Addition of smallest and greatest prime numbers : 24
*/
