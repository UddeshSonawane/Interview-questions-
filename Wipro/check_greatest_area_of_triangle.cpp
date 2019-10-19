/* wipro recruitment online test

Problem statement : To print the largest area of a triangle between two triangles

by Uddesh


Explaination:  Sides of triangle are given
	Input: for first triangle ->  a, b, c
	       for second triangle ->  p, q, r

	Output : greatest area
	

Heart of code : 
	Formula :  Area of Triangle = sqrt(S*(S-a)*(S-b)*(S-c))
	           
	            S = (a+b+c)/2
	
*/

#include<iostream>
#include<cmath>
using namespace std;

float area(float x, float y, float z)
{
	float s;
	s=(x+y+z)/2;
	
	float area;
	
	area=sqrt(s*(s-x)*(s-y)*(s-z));
	return area;
}

int main()
{
	float t11,t12,t13,t21,t22,t23;
	float area1, area2;
	
	cout<<"\nEnter Data for triangles (eg. 5 8 9) ";
	
	cout<<"\nEnter lengths of sides of first triangle : ";
	cin>>t11>>t12>>t13;
	area1=area(t11,t12,t13);
	
cout<<"\n*****"<<area1;
	
	cout<<"\nEnter lengths of sides of second triangle : ";
	cin>>t21>>t22>>t23;
	area2=area(t21,t22,t23);
cout<<"\n*****"<<area2;


	if(area1>area2)
	{
		cout<<"\nLargest areaof triangle : "<<area1;
	}
	else
		cout<<"\nLargest areaof triangle : "<<area2;
			
return 0;
}

/*
OUTPUT

Enter Data for triangles (eg. 5 8 9) 
Enter lengths of sides of first triangle : 5
8
9

*****19.8997
Enter lengths of sides of second triangle : 3
4
5

*****6
Largest areaof triangle : 19.8997

*/
