/******************************************************************************

             Swap two numbers without using third variable

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a=7;
    b=5;
    cout<<"\nNumbers before swapping ";
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
    
    a=a+b;        //
    b=a-b;        //////  Logic
    a=a-b;        //
    
    cout<<"\nNumbers after swapping ";
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
    
    return 0;
}

/*

output

Numbers before swapping
a=7
b=5

Numbers before swapping
a=5
b=7

*/
