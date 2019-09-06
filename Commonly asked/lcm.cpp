//Find LCM of two numbers

#include<iostream>
using namespace std;

int main()
{
	int num1,num2,min;
	cout<<"\nEnter first number : ";
	cin>>num1;
	cout<<"\nEnter second number : ";
	cin>>num2;
	cout<<"\nFirst Number : "<<num1;
	cout<<"\nSecond Number : "<<num2;
	if(num1<num2)
		min=num1;
	else
		min=num2;
		
	while(1)
	{
		if(min%num1==0 && min%num2==0)
		{
			cout<<"\nLCM : "<<min;
			break;
		}
		min++;
	}
	
return 0;
}
