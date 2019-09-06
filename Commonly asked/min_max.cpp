//find maximum number (viceversa for minimum)


#include<iostream>
using namespace std;

int main()
{
	int a[7]={4,2,5,7,8,1,3};
	int max=a[0];
	for(int i=1;i<7;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	cout<<"\nMaximum number in array is : "<<max;
	
return 0;
}
