/*
wipro recruitment online test

Problem statement : To print discount

explaination:  a number is given. add even digits in that number and give that much discount on input number.
   
            input: 23456
		
		output:  2814

	(question may vary like, in case of sum of even digits, sum of odd digits will be asked.
	  or discount of subtraction of above two cases, likewise. But logic may remain same)  
           

by Uddesh

*/

#include<iostream>
using namespace std;

int main()
{
 int n,sum=0,even=0,odd=0,bill;
cout<<"Enter the bill amount";
cin>>n;
bill=n;
while(n>9)
{
//cout<<"*";
	 sum=n%10;
       if(sum%2==0)
        even=even+sum;
      else 
        odd = odd+sum;

	n=n/10;
}

if(n%2==0)
	even=even+n;
else
	odd=odd+n;
cout<<"\nsum of even digits : "<<even;
cout<<"\nSum of odd digits : "<<odd;
cout<<"\n";
int amount=bill*(even)/100;
cout<<amount;
return 0;
}


/*
OUTPUT

Enter the bill amount23456

sum of even digits : 12
Sum of odd digits : 8
2814

*/
