#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=40;
    int count =0;
    while(n>0)
    {
        n=(n&(n-1));//always change  the right most set bit to zero;
        count++;
    }
    cout<<count;
}