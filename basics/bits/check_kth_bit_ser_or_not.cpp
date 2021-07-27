// //using right shift operator 
// The left-shift by 1 and right-shift by 1 are equivalent to the product of first term and 2 to the power given element(1<<3 = 1*pow(2,3)) and division of first term and second term raised to power 2 (1>>3 = 1/pow(2,3)) respectively. 
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