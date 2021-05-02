/*Finastra interview Question

You are given N numbers on a circle, described by an array. Find the maximum number of neighbouring pairs whose sum
are even. One element can belong to only one pair.

Example
Given A=[4,2,5,8,7,3,7], output should be 2.
We can create two pairs with even sums: (A[0], A[1]) and (A[4],A[5]). Another way to choose two pairs is :(A[5],A[6]).

Solution by Uddesh
*/
#include <iostream>
using namespace std;
int main() {
    int N; //total numbers on circle
    cout<<"Enter total numbers on circle : ";
    cin>>N;
    int numbers[N];
    cout<<"Enter numbers on circle -> ";   // you can initialise array directly without user input
    for(int i=0;i<N;i++)
    {
        cout<<"\nEnter number : ";
        cin>>numbers[i];
    }
    int even_sum_pair_count=0;
    int temp=0;
    while(temp<N-1){
        if((numbers[temp]+numbers[temp-1])%2==0)
        {
            even_sum_pair_count++;
            //cout<<"\n"<<numbers[temp]<<"+"<<numbers[temp+1]<<"="<<numbers[temp]+numbers[temp+1];
            temp=temp+2;
        }
        else
            temp++;
    }
    
    if(N%2!=0)
    {
        if((numbers[0]+numbers[N-1])%2==0)
        {
            even_sum_pair_count++;
            //cout<<"\n"<<numbers[0]<<"+"<<numbers[N-1]<<"="<<numbers[0]+numbers[N-1];
        }
    }
    
    cout<<even_sum_pair_count;
    return 0;
}
