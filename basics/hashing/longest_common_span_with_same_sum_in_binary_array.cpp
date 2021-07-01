#include<bits/stdc++.h>
using namespace std;

void naive(int a[],int b[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++)
        {
            sum1+=a[j];
            sum2+=b[j];
            if(sum1==sum2)
            res=max(res,j-i+1);
        }
    }
    cout<<res;
} 
/*
method 1:
apply logical and to both arrays 
find the longest streak of 1 

method 2: 
temp=array 1 - array2
find the longest substring with sum equals to zero
*/

int main()
{
    int a[6]={1,0,1,1,1,1};
    int b[6]={1,0,0,0,0,0};
    naive(a,b,6);

}