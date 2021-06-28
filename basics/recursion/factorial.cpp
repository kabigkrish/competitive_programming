#include<bits/stdc++.h>
using namespace std;

int  fact(int n)
{
    //correct base case is 0
    /* if we take base case as 1 it will not detect fact(0) and calculate till negative infy
    which will give segmentation fault error*/
    if(n==0) return 1;
    return n*fact(n-1);
}
int main()
{
    int n=5;
    cout<<fact(5);
}