/*
Wipro recruitment test

Problem Statement: To print the the total number of digits repeated in a number.

Explaination: Input : 23456236
                     here, 2,3,6 are repeated.
                     hence key=3;
              Output : 3
              
by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	long int num;
	cout<<"\nEnter a number : ";
	cin>>num;
	
	int arr[10];
	
	for(int i=0;i<10;i++)
	{
		arr[i]=0;
	}
	
	int x,y;
	while(num>10)
	{
		x=num%10;
		arr[x]++;
		num=num/10;
	}
	arr[num]++;
	
	int key=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i]>1)
		{
			key++;
		}
	}
	
	cout<<"\nKey : "<<key;

return 0;
}

/*
OUTPUT

Enter a number : 23234565

Key : 3


Enter a number : 258957645

Key : 1
*/
