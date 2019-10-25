/*
Wipro recruitment test

Problem Statement: 

              Input : 4                  -> size of array
	              12 13 26 42        -> elements in array
            
             Output : 3 4 8 6
             
             Explaination: 1+2=3
                           1+3=4
                           2+6=8
                           4+2=6      
                     
by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter size of array : ";
	cin>>n;
	
	int arr[n], out[n], temp,x, sum;
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter value : ";
		cin>>arr[i];
		temp=arr[i];
		sum=0;
		while(temp>9)
		{
			x=temp%10;
			sum=sum+x;
			temp=temp/10;
		}
		sum=sum+temp;
		out[i]=sum;
	}
	
	cout<<"\nINPUT\tOUTPUT";
	for(int i=0;i<n;i++)
	{
		cout<<"\n "<<arr[i]<<"\t"<<out[i];
	}

return 0;
}

/*
OUTPUT

Enter size of array : 4

Enter value : 12

Enter value : 13

Enter value : 26

Enter value : 42

INPUT	OUTPUT
 12	3
 13	4
 26	8
 42	6
 
 */
