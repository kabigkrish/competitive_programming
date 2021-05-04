// Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

// NOTE A solution will always exist. read Goldbach’s conjecture

// Example:


// Input : 4
// Output: 2 + 2 = 4

// If there are more than one solutions possible, return the lexicographically smaller solution.

// If [a, b] is one solution with a <= b,
// and [c,d] is another solution with c <= d, then

// [a, b] < [c, d] 

// If a < c OR a==c AND b < d. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>prime;
    int n=100;    
    for(int i=0;i<=n;i++)
    {
        prime.push_back(0);
    }
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=2;j*i<=n;j++)
        {
            prime[i*j]=1;
        }
    }
    vector<int>final_prime;
    for(int i=0;i<n;i++)
    {
        if(prime[i]==0)
        {
            final_prime.push_back(i);
            
        }
    }
     vector<int>output;
    for(int i=0;i<final_prime.size();i++)
    {
        for(int j=i+1;j<final_prime.size();j++)
        {
            if((final_prime[i]+final_prime[j])==n)
            {
                output.push_back(final_prime[i]);
                output.push_back(final_prime[j]);
            }
        }
    }
     for(int i=0;i<output.size();i++)
     {
         cout<<output[i]<<endl;
     }
}