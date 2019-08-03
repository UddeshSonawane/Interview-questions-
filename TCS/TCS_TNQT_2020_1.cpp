/*TCS TNQT 2020 Programing question

take a number as input.
find the difference between the sum of digits at even places to that of sum of digits at odd places.

input: 123456
output: 3

explaination: sum of digits at even places=even=2+4+6
                                               =12
              sum of digits at odd places=odd=1+3+5
                                             =9
                                            
              output=even-odd
                    =12-9
                    =3              // don't care about sign. give the magnitude of output
                    
                 
solution by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	long int number;
	cout<<"\nEnter a number : ";
	cin>>number;
	cout<<"\nInput : "<<number;
	int i=0,even=0,odd=0;
	while(number!=0)
	{
		int x;
		x=number%10;
		if((i%2)==0)
		{
			even=even+x;
		}
		else
		{
			odd=odd+x;
		}
		number=number/10;
		i++;
	}
	
	int result;
	result=abs(even-odd);
	
	cout<<"\nOutput : "<<result;

return 0;
}  

/*
output

Input : 123456
Output : 3 

Input : 12345678
Output : 4

Input : 123456789
Output : 5

Input : 1234567891
Output : 4

*/                          
