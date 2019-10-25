/*
Wipro recruitment test

Problem Statement: To print sum of prime digits in a number.

Explaination: Input : 578 
            
              Output : 12    5+7=12
                     
by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"\nEnter a number : ";
	cin>>num;
	
	int sum=0, x;
	while(num>9)
	{
		x=num%10;
		if(x==2 || x==3 || x==5 || x==7)
		{
			sum=sum+x;
		}
		num=num/10;	
	}
	if(num==2 || num==3 || num==5 || num==7)
	{
		sum=sum+num;
	}
	
	cout<<"\nOUTPUT : "<<sum;
		
return 0;
}

/*
OUTPUT

Enter a number : 576

OUTPUT : 12

--------------------------

Enter a number : 235

OUTPUT : 10

--------------------------

Enter a number : 263

OUTPUT : 5
*/
