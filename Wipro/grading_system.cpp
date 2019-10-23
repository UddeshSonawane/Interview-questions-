/* wipro recruitment online test

Problem statement : Grading system

		input : <marks>

			marks in between         Grade
			    100-90                 A
                    90-80                 B
                    80-70                 C
                    70-60                 D
                    60-50                 E
                    50-below              ATKT

          output : <grade>

by Uddesh

*/

#include<iostream>
using namespace std;

int main()
{
	int marks;
	cout<<"\nEnter marks between 0-100 : ";
	cin>>marks;
	
	if(marks<=100 && marks>=90)
		cout<<"\nGrade : A";
	else if(marks<90 && marks >=80)
		cout<<"\nGrade : B";
	else if(marks<80 && marks >=70)
		cout<<"\nGrade : C";
	else if(marks<70 && marks >=60)
		cout<<"\nGrade : D";
	else if(marks<60 && marks >=50)
		cout<<"\nGrade : E";
	else if(marks<50)
		cout<<"\nGrade : ATKT";	

return 0;
}

/*

OUTPUT

Enter marks between 0-100 : 95

Grade : A

--------------------------------

Enter marks between 0-100 : 60

Grade : D

--------------------------------

Enter marks between 0-100 : 40

Grade : ATKT
*/
