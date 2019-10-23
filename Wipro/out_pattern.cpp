/* wipro recruitment online test

Problem statement : input :  3
                             5 3 3
                    output : 5 15 45

                   explaination : 5=5*1
                                  15=5*3
                                  45=15*3

by Uddesh

*/


#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter size of array : ";
	cin>>n;

	int arr[n], arrcpy[n];
	cout<<"\nEnter elements of array : ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter element - > ";
		cin>>arr[i];
	}
	
	cout<<"\nINPUT : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	arrcpy[0]=arr[0];
	cout<<"\nOUTPUT : "<<arr[0]<<" ";
	for(int i=1;i<n;i++)
	{
		arrcpy[i]=arr[i]*arrcpy[i-1];
		cout<<arrcpy[i]<<" ";
	}
return 0;
}

/*
OUTPUT

enter size of array : 3

Enter elements of array : 
Enter element - > 5

Enter element - > 3

Enter element - > 3

INPUT : 5 3 3 
OUTPUT : 5 15 45

*/
