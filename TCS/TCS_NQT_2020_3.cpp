/*
TCS NQT

Find divisors of a number separated by space
and raise an error for negative input

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter a number  : ";
	cin>>n;
	
	if(n<0)
	{
		cout<<"\nWrong input";
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
				cout<<i<<" ";
		}
	}	
	return 0;
}

/*
OUTPUT

Enter a number  : 15
1 3 5 15


Enter a number  : -9
Wrong input
*/
