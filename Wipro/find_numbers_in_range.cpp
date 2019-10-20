/*
Wipro recruitment test

Problem Statement: To print elements in the range.

Explaination: Input : 6 30 50               6-> size of array,  30->lower limit,  50->upper limit
                      23 45 31 52 60 61      -> elements in array
                     
              Output : 45 31                 -> elements in array which are in range
                       -1                    -> if none of the elements are in range
              
by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	int n, low, high;
	cout<<"\nEnter total number of elements in array : ";
	cin>>n;
	
	cout<<"\nEnter lower limit : ";
	cin>>low;
	cout<<"\nEnter upper limit : ";
	cin>>high;
	
	int arr[n];
	cout<<"\nEnter elements of array ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter element : ";
		cin>>arr[i];
	}
	
	int count=0, x;
	cout<<"\nOUTPUT : ";
	for(int i=0;i<n;i++)
	{
		x=arr[i];
		if(x>low && x<high)
		{
			cout<<x<<" ";
		}
		else
			count++;
	}
	
	if(count==n)
		cout<<"-1";

return 0;
}

/*
OUTPUT

Enter total number of elements in array : 6

Enter lower limit : 30

Enter upper limit : 50

Enter elements of array 
Enter element : 12

Enter element : 16

Enter element : 31

Enter element : 42

Enter element : 49

Enter element : 52

OUTPUT : 31 42 49 

--------------------------------------

Enter total number of elements in array : 6

Enter lower limit : 30

Enter upper limit : 50

Enter elements of array 
Enter element : 10

Enter element : 12

Enter element : 13

Enter element : 15

Enter element : 16

Enter element : 18

OUTPUT : -1

*/
