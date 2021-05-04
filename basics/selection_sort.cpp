#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        if(a[j]<a[min_idx])
        min_idx=j;
        swap(a[i],a[min_idx]);
    }
    for(int i=0;i<5;i++)
    cout<<a[i]<<endl;
}
int main()
{
    int a[5]={4,3,2,1,5};
    bubble_sort(a,5);
}