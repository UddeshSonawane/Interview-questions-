/*
Wipro recruitment test

Problem Statement: To print the item whose sell is more.

Explaination: Input : 4 3             
                      2 3 4
                      1 2 1
                      6 4 3 
                      2 5 4 
            
              Output : 3
                       2
                       1
                       2
                     
by Uddesh
*/

#include<iostream>
using namespace std;

int main()
{
	int basket, item;
	cout<<"\nEnter total number of baskets : ";
	cin>>basket;
	cout<<"\nEnter total number of available items : ";
	cin>>item;
	
	int record[basket][item];
	cout<<"\nEnter item details in each basket";
	for(int i=0;i<basket;i++)
	{
		cout<<"\nFor items in basket "<<i+1;
		for(int j=0;j<item;j++)
		{
			cout<<"\nEnter sell of item "<<j+1<<" : ";
			cin>>record[i][j];
		}
	}
	
	int max,key;
	cout<<"\nOUTPUT";
	for(int i=0;i<basket;i++)
	{
		max=0;
		cout<<"\nMax sell in basket "<<i+1<<" is for item : ";
		for(int j=0;j<item;j++)
		{
			if(max<record[i][j])
			{
				max=record[i][j];
				key=j;
			}		
		}
		cout<<key+1;
	}


return 0;
}

/*
OUTPUT

Enter total number of baskets : 4

Enter total number of available items : 3

Enter item details in each basket
For items in basket 1
Enter sell of item 1 : 2

Enter sell of item 2 : 3

Enter sell of item 3 : 4

For items in basket 2
Enter sell of item 1 : 1

Enter sell of item 2 : 2

Enter sell of item 3 : 1

For items in basket 3
Enter sell of item 1 : 6

Enter sell of item 2 : 4

Enter sell of item 3 : 3

For items in basket 4
Enter sell of item 1 : 2

Enter sell of item 2 : 5

Enter sell of item 3 : 4

OUTPUT
Max sell in basket 1 is for item : 3
Max sell in basket 2 is for item : 2
Max sell in basket 3 is for item : 1
Max sell in basket 4 is for item : 2

*/
