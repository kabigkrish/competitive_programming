//using right shift operator 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int k=3;
    if(1&(n>>(k-1)))
    cout<<"yes";
    else
    cout<<"no";
}