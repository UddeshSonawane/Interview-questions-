//Find HCF

#include<iostream>    //floating point exception
using namespace std;

int main()
{
	int num1,num2,min,HCF=1;
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
		if(num1%min==0 && num2%min==0)
		{
			HCF=min;
			break;
		}
		min--;
	}
	cout<<"\nHCF : "<<HCF;
	
return 0;
}
