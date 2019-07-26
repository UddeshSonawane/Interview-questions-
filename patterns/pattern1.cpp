
/*Question by Josh Software
    Print following pattern
1                                                                                                                                
2*3                                                                                                                              
4*5*6                                                                                                                            
7*8*9*10                                                                                                                         
7*8*9*10                                                                                                                         
4*5*6                                                                                                                            
2*3                                                                                                                              
1  


Solution by Uddesh S. Sonawane


*/
#include <iostream>

using namespace std;

int main()
{
    for(int i=1,k=1;i<=4;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<k;
            if(i!=(j+1))
                cout<<"*";
            k++;
        }
        cout<<"\n";
    }
    
    int l=10;      
    for(int i=4,k=l;i>=1;i--)
    {
        k=l-i;
        for(int j=0;j<i;j++)
        {
            k++;
            cout<<k;
            if(i!=(j+1))
                cout<<"*";
            l--;
        }
        cout<<"\n";
    }
    return 0;
}

/*OUTPUT

1                                                                                                                                
2*3                                                                                                                              
4*5*6                                                                                                                            
7*8*9*10                                                                                                                         
7*8*9*10                                                                                                                         
4*5*6                                                                                                                            
2*3                                                                                                                              
1   

*/  
