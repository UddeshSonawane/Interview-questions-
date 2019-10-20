/* wipro recruitment online test

Problem statement : To arrange odd numbers after even numbers in a list. 

by Uddesh

*/

#include<iostream>
using namespace std;

int main()
{
 int n,sum=0,even[100],odd[100],arr[100],k=0,j=0;
cout<<"Enter total numbers : ";
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
{ 
       if(arr[i]%2==0)
        {
	  even[k]=arr[i];
          k++;
	}
      else  
        {
	  odd[j]=arr[i];
          j++;
	}
}

for(int i=0;i<k;i++)
	cout<<even[i]<<" ";

for(int i=0;i<j;i++)
	cout<<odd[i]<<" ";

return 0;
}

/*
OUTPUT

Enter total numbers : 5
10
11
12
13
14

10 12 14 11 13 

*/
