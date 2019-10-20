/*
Wipro recruitment test

Problem Statement: To print the index of bucket to place the number.

Explaination: A number is given. Find the maximum digit in that number. That digit will be the index of bucket.

	Input : 234568236
        Output : 8
              
by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	long int num, cpynum;
	cout<<"\nEnter a number : ";
	cin>>num;
	cpynum=num;
	
	int index=0,x;
	while(num>9)
	{
		x=num%10;
		if(x>index)
		{
			index=x;
		}
		num=num/10;
	}
	
	if(num>index)
	{
		index=num;
	}
	
	cout<<"\nIndex of bucket for "<<cpynum<<" is "<<index;

return 0;
}

/*
OUTPUT

Enter a number : 256893

Index of bucket for 256893 is 9

-------------------------------------

Enter a number : 1234

Index of bucket for 1234 is 4

-------------------------------------

Enter a number : 5412

Index of bucket for 5412 is 5

*/
