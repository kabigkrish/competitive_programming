#include<bits/stdc++.h>
using namespace std;

bool subarray(int a[],int sum)
{
    unordered_set<int>h;
    int prefix_sum=0;
    for(int i=0;i<5;i++)
    {
        prefix_sum+=a[i];
        if(prefix_sum==sum)return true; 
        /*
        to handle corner case 
        when sub array start with zero index ,there wont be any presum for zero index it will return false
        which is wrong .so we are adding this corner case.
        {2,3,4,56}; here 2+3+4=9 which cant be find without corner case.
        */
        if(h.find(prefix_sum-sum)!=h.end())
        return true;
        h.insert(prefix_sum);

    }
    return false;
}
int main()
{
    int a[5]={1,2,3,4,5};
    int sum=9;
    cout<< subarray(a,sum);
}