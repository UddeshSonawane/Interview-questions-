//FIBONACCI SERIES

#include<iostream>
using namespace std;

int main()
{
	int a=0, b=1, n, temp;
	cout<<"\nenter length of fib series : ";
	cin>>n;
	
	cout<<"\nFibonacci Series is : ";
	for(int i=0;i<n;i++)
	{
		cout<<a<<" ";
		temp=a+b;
		a=b;
		b=temp;
	}
		
return 0;
}
