#include<bits/stdc++.h>
using namespace std;

void pairr(int a[],int sum)
{
    unordered_set<int>h ;
    for(int i=0;i<6;i++)
    {
        if(h.find(sum-a[i])!=h.end())
        {
            cout<<"true"<<endl;
            }
        else
        h.insert(a[i]);
    }
     
}
int main()
{
    int a[6]={1,20,30,4,50,6};
    int sum=7;
    pairr(a,sum);
}