#include<bits/stdc++.h>
using namespace std;

int  fib(int n)
{
 /*base case n==0 return 0
             n==1 return 1*/

    if(n<=1) return n;
    return fib(n-2)+fib(n-1);
}
int main()
{
    int n=5;
    cout<<fib(5);
}