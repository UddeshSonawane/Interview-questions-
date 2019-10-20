/*
Wipro recruitment test

Problem Statement: To print product of sum of digits at even and odd positions.

	Input : 32456
        Output : 91
        Explaination : 3+4+6=13
                       2+5=7
                       13*7=91
              
by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	long int num;
	cout<<"\nEnter a number : ";
	cin>>num;
	
	int sum1=0, sum2=0, x, i=1;
	while(num>9)
	{
		x=num%10;
		if(i%2==0)
		{
			sum1=sum1+x;
		}
		else
		{
			sum2=sum2+x;
		}
		num=num/10;
		i++;
	}
	
	if(i%2==0)
	{
		sum1=sum1+num;
	}
	else
	{
		sum2=sum2+num;
	}
	
	cout<<"\nOUTPUT : "<<(sum1*sum2);
	

return 0;
}

/*
OUTPUT

Enter a number : 32456

OUTPUT : 91

*/
