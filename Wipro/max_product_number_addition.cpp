/*
Wipro recruitment test

Problem Statement: To print addition of two numbers in array whose product is maximum.

	Input : 6             ->size of array
                5 6 2 4 3 1   ->elements in array
        Output : 11           ->addition 5+6
              
by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	int n, temp;
	cout<<"\nEnter size of array : ";
	cin>>n;
	
	int arr[n];
	cout<<"\nEnter values ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter number : ";
		cin>>arr[i];
	}
	
	cout<<"\nInput array : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout<<"\nOutput array : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	int x;
	x=arr[n-1]+arr[n-2];
	cout<<"\nOUTPUT : "<<x;

return 0;
}

/*
OUTPUT

Enter size of array : 6

Enter values 
Enter number : 5

Enter number : 6

Enter number : 2

Enter number : 4

Enter number : 3

Enter number : 1

Input array : 5 6 2 4 3 1 
Output array : 1 2 3 4 5 6 
OUTPUT : 11

*/
