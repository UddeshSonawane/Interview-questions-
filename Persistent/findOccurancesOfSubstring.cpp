/*
Write a program that will count the occurances of a given substring in given string.
sample input:  Sample string : abcetidabcthdabgtabc
               substring : abc
               
Sample Output : 3

*/


#include<iostream> 
using namespace std; 
int countFreq(string pat, string txt) 
{ 
    int M = pat.length(); 
    int N = txt.length(); 
    int res = 0; 
    for (int i = 0; i <= N - M; i++) 
    {  
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
} 
int main() 
{ 
   string txt; 
   string pat;
   cin>>txt;
   cin>>pat;
   cout << countFreq(pat, txt); 
   return 0; 
} 
