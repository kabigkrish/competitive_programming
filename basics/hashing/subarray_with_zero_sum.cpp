#include<bits/stdc++.h>
using namespace std;

void subarray(int a[]) //o(n^2)
{
    int n=5;//array length
    for(int i=0;i<n;i++)
    {
        int current=0;
        for(int j=i;j<n;j++)
        {
            current+=a[j]; 
            if(current==0) cout<<i<<" "<<j;
        }
    }
}
void efficient(int a[])
{
/* using prefix sum
find the sum of previous index in iteration and add in hash set.
if sum is same as before that means there is a sub array with zero so that prefix1+prefix2=prefix1 (i.e prefix 2 is zero)
*/
    unordered_set<int>h;
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
        if(h.find(sum)!=h.end())
        {
            cout<<"true";
        }
        if(sum==0) cout<<"true";// to handle the conrner case if prefix1 itself zero 
        h.insert(sum);
    }
}
int main()
{
    int a[5]={1,2,3,-5,3};
    //subarray(a);
    efficient(a);
}