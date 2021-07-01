#include<bits/stdc++.h>
using namespace std;
void intersect(int a[],int b[])
{
    int n=6,m=3,res=0;
    unordered_set<int>s_a(a,a+n);
    for(int j=0;j<m;j++)
    {
        if(s_a.find(b[j])!=s_a.end())
        {
            res++;
            s_a.erase(b[j]);//to avoid duplicates like 
            //in b array if we have {1,1,1,2,2,3,3} here there are duplicates to avoid that 
            // we remove from a as soon as we increment the counter 
            // orelse we need to conver array b also to set then do it normaly to avoid duplicates
        }
    }
    cout<<res;
}
int main()
{
    int a[6]={1,2,8,3,5,5};
    int b[3]={1,2,3};
    intersect(a,b);
}

//time complexity is O(m+n)