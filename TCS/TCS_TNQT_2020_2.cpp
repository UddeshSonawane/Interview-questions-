/* TCS TNQT 2020 PROBLEM STATEMENT 2

(There was theory regarding a person in question. Extracted problem satement from that is given as)
There was a man initially at origin. He first turned right and travelled a distance of 10 units.
His second turn was in upward direction of 20 units. Then he turned left and travelled 30 units.
Again he turned downward and trace 40 units. then again turned left and travelled 50 units. And so on.
He every travels a distance increased by 10 units than previous distance.
Print the final position of man after given number of turns (n).
2<=n<=1000

Input : 3
Output : (-20,20)

Input : 4
Output : (-20,-20)


Solution by Uddesh

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"\nEnter a number : ";
	cin>>n;
	
	int x=0,y=0, cnt=0;
	
	for(int i=1;i<=n;i++)
	{
		//for x coordinate
		if((i%2)!=0)
		{
			//cout<<"\n*";
			if(i==1)
				x=10;
			else
			{
				if(x<0)
				{
					x=abs(x);
					x=(x+10);
				}
				else
					x=(x+10)*(-1);				
			}
		}
				
		//for y coordinate
		if(i>1)
		{
			if(cnt==0||cnt==4)
			{
				y=abs(y);
				y=y+20;
				cnt=0;
			}
				
			if(cnt==2)
			{
				y=y*(-1);
				
			}	
			cnt++;
		}	
		cout<<"\nAfter iteration '"<<i<<"'  (x,y) => ("<<x<<","<<y<<")";
	}
	
	cout<<"\n-----------------------------------";
	cout<<"\nInput : "<<n;
	cout<<"\nOutput : (x,y) => ("<<x<<","<<y<<")";
	
return 0;
}

/*
Sample output

Enter a number : 10

After iteration '1'  (x,y) => (10,0)
After iteration '2'  (x,y) => (10,20)
After iteration '3'  (x,y) => (-20,20)
After iteration '4'  (x,y) => (-20,-20)
After iteration '5'  (x,y) => (30,-20)
After iteration '6'  (x,y) => (30,40)
After iteration '7'  (x,y) => (-40,40)
After iteration '8'  (x,y) => (-40,-40)
After iteration '9'  (x,y) => (50,-40)
After iteration '10'  (x,y) => (50,60)
-----------------------------
Input : 10
Output : (x,y) => (50,60)
*/
