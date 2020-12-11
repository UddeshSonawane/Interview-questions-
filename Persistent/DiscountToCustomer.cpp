/******************************************************************************

    write a program according to following condition
    
    a company wants to offer discount to customers wrt product count
    if product count is positive means that amount of products requested by customer and are available in inventory
    if product count is negatic means that amount of products requested by customer and are not available in inventory
    
    discount will be offered only in case when that much amount of products are available in inventory
    and the discount should be multiple of products requested
    
    Input format : first line contains two space separated integers representing total number of customers (N)
                   and discount amount respectively.
                   
                   Second line contains N space separated integers representing amount of products requested by customers
                   (those may be +ve or -ve as per forementioned explaination)
                   
    Output Format : an integer representing total count of customers who availed the discount
    
    Sample input : 5 15
                   10 15 -5 8 -12
                   
    Sample output : 1

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,dis,temp;
    n=5;
    dis=15;
    int arr[n]={10,15,-5,8,-12};
    
    int ans=0;
    for(int i=0;i<n;i++)
    {
        temp=arr[i];
        if(temp>0)
        {
            if(dis%temp==0)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}

/*
OUTPUT

1                                                                                                        

*/
