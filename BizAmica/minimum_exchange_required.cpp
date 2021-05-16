/* BizAmica Coding interview question
  
Solution by Uddesh*/

#include <iostream>
using namespace std;

int main()
{
    int total=4;
    int temp=total-1;
    int arr[total][total];
    for(int i=0;i<total;i++)
        for(int j=0;j<total;j++)
            arr[i][j]=0; 
    int done=2;
    int donearr[2][2]={{1,2},{2,3}};
    int willing=2;
    int willingarr[2][2]={{3,4},{1,4}};
    for(int i=0;i<total-1;i++)
    {
        for(int j=1;j<total;j++)
        {
            if(done>0 && arr[donearr[i][0]-1][donearr[i][1]-1]==0)
            {
                arr[donearr[i][0]-1][donearr[i][1]-1]=1;
                done--;
            }
        }
        if(arr[i][i+1]==1)
            temp--;
    }
    int minreq=temp;
    if(temp==0)
        cout<<"0";
    else
    {
        for(int i=0;i<total-1;i++)
        {
            for(int j=1;j<total;j++)
            {
                if(willing>0 && arr[willingarr[i][0]-1][willingarr[i][1]-1]==0)
                {
                    arr[willingarr[i][0]-1][willingarr[i][1]-1]=2;
                    willing--;
                }
            }
            if(arr[i][i+1]==2)
                temp--;
        }
        if(temp==0)
            cout<<minreq;
        else
            cout<<"-1";
    }
    return 0;
}
