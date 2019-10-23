/* wipro recruitment online test

Problem statement : Energy at nth second.

		Initially energy has some value E. That energy increases at rate of 'r' per second.
          Find energy at the end of 'nth' second.

by Uddesh

*/

#include<iostream>
using namespace std;

float pow(float x, int n)
{
	float y=1;
	while(n!=0)
	{
		y=y*x;
		n--;
	}
	
	return y;
}

int main()
{
	float E, r;
	int n;
	
	cout<<"\nEnter initial value of energy : ";
	cin>>E;
	
	cout<<"\nEnter rate of increment : ";
	cin>>r;
	
	cout<<"\nEnter time to examine energy in sec : ";
	cin>>n;
	
	float out, temp, ret_val;
	
	
	temp=1+(r/100);
	cout<<"\ntemp : "<<temp;
	ret_val=pow(temp,n);
	cout<<"\nret_val : "<<ret_val;
	out=E*(ret_val);
	
	cout<<"\nEntergy at time "<<n<<" (in sec) : "<<out;

return 0;
}

/*OUTPUT

Enter initial value of energy : 10

Enter rate of increment : 3

Enter time to examine energy in sec : 3

temp : 1.03
ret_val : 1.09273
Entergy at time 3 (in sec) : 10.9273

*/
