/** MindTree Coding interview Question
 Print the given matrix in spiral form
SAMPLE INPUT : { {1,2,3},
                 {4,5,6},
                 {7,8,9}}
                 
SAMPLE OUTPUT : 1 2 3 6 9 8 7 4 5
Solution by Uddesh
**/

#include <iostream>

using namespace std;

int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int fr=0, lr=2,fc=0,lc=2;
    string move="right";
    
    while(fr<=lr && fc<=lc)
    {
        if(move=="right")
        {
            for(int i=fc; i<=lc; i++)
                cout<<mat[fr][i]<<" ";
            fr++;
            move="down";
        }
        else if(move=="down")
        {
            for(int i=fr;i<=lr;i++)
                cout<<mat[i][lc]<<" ";
            lc--;
            move="left";
        }
        else if(move=="left")
        {
            for(int i=lc;i>=fc;i--)
            {
                cout<<mat[lr][i]<<" ";
            }
            lr--;
            move="up";
        }
        else if(move=="up")
        {
            for(int i=lr;i>=fr;i--)
            {
                cout<<mat[i][fc]<<" ";
            }
            fc++;
            move="right";
        }
    }
    return 0;
}

/*
1 2 3 6 9 8 7 4 5
*/
