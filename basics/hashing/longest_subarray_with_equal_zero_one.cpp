#include<bits/stdc++.h>
using namespace std;

void naive(int a[],int n)
{
    int res=0;
    for( int i=0;i<n;i++)
    {
       int  zero_count=0,one_count=0;
       for(int  j=i;j<n;j++)
       {
           if(a[j]) one_count++;
           else zero_count++;
           if(one_count==zero_count) res=max(res,j-i+1);
       }
    }
    cout<<res<<endl;
}
void effiecient(int a[],int n)
{
    /*
    replace 0 with -1 and this same as finding longest subarray with given sum*/
    unordered_map<int,int>m;
    int pre_sum=0,res=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=a[i];
        if(pre_sum=sum) res+=i;
        if(m.find(pre_sum-sum)==m.end())
        m.insert({pre_sum,i});
        if(m.find(pre_sum-sum)!=m.end())
        res=max(res,i-m[pre_sum-sum]);

    }
    cout<<res+1;

}
int main()
{
    int a[6]={1,0,0,0,0,1};
    int n=6;
    naive(a,n);
    effiecient(a,n);
} 
 