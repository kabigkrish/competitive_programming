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
            s_a.erase(b[j]);
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