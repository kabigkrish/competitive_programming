#include<bits/stdc++.h>
using namespace std;
void printfreq(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j]){ flag=true;break;}
        }
        if(flag==true)
        continue;
        int freq=1;
        for(int j=i+1;j<n;j++)
        if(arr[i]==arr[j])
        freq++;
        cout<<arr[i]<<" "<<freq<<endl;

    }
}
void efficient(int arr[],int n)
{
    unordered_map<int,int> h;
    for(int i=0;i<n;i++)
    h[arr[i]]++;
    for(auto i:h)
    cout<<i.first<<" "<<i.second<<endl;
}
int main()
{
    int arr[5]={1,2,3,1,2};
    int n=5;
    efficient(arr,n);
} 