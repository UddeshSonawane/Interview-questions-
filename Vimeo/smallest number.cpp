/*
	Vimeo Full Stack Developer 
	Hiring Quiz on HackerEarth solved by Uddesh
	
	**** Find the smallest number
	
	input:   first line -> total number of test cases ->n
	         next n lines -> different numbers
			 
	output:   on different n lines -> a number that satsfies the following conditions   
	 
	assume x-> input numer
	       y -> output number corresponds to x
	       
	       such that
	    		y>x and
	    		p(y) != p(x)    where 
	    						p(x)=0 if count (numbers less than equal to x are factors of x) is even
	    						p(x)=1 if count (numbers less than equal to x are factors of x) is odd
	
				 
	Sample input
	
	1
	3
	
	sample output
	4


*/


#include<iostream>
using namespace std;

int main()
{
	int in_no,no_test_cases;
	cout<<"\nEnter numbr of test cases : ";
	cin>>no_test_cases;
	
	for(int i=0;i<no_test_cases;i++)
	{
		cout<<"\nEnter a number : ";
		cin>>in_no;
		
		int p_in_no=0;
		for(int i=1;i<=in_no;i++)
			if(in_no%i==0)
				p_in_no++;
		
		if(p_in_no%2==0)
			p_in_no=0;
		else
			p_in_no=1;
		
		int p_x,x;
		int flag;
		x=in_no+1;
		
		do
		{
			flag=0;
			p_x=0;
			
			for(int i=1;i<=x;i++)
				if(x%i==0)
					p_x++;
		
			if(p_x%2==0)
				p_x=0;
			else
				p_x=1;
			
			if(p_x!=p_in_no)
				flag=1;
			else
				x++;
			
		}while(flag!=1);
		cout<<"\nNumber : "<<x;	
	}
return 0;
}

/*

Enter numbr of test cases : 3

Enter a number : 5

Number : 9
Enter a number : 6

Number : 9
Enter a number : 9

Number : 10

*/
