#include<bits/stdc++.h>
using namespace std;

void longsubs(int a[],int n,int sum)
{
    unordered_map<int,int>m;
    int pre_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=a[i];
        if(pre_sum=sum) res+=i;
        if(m.find(pre_sum-sum)==m.end())
        m.insert({pre_sum,i});
        if(m.find(pre_sum-sum)!=m.end())
        res=max(res,i-m[pre_sum-sum]);

    }
}
int main()
{
    int a[6]={1,2,3,5,1,6};
    int n=6,sum=6;
    longsubs(a,n,sum);
}