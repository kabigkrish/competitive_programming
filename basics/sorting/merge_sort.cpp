#include<bits/stdc++.h>
using namespace std;

void merger(int a[],int b[],int m,int n)
{ 
    int i=0,j=0;   
    while (i<m &&j<n)
    { 
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else 
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m)
    {
        cout<< a[i]<<" ";i++;

    }   
    while(j<n) 
    {
        cout<< b[j]<<" ";  
        j++;
    }

 
}
int main()
{
    int a[6]={1,3,5,7,9,11};
    int b[4]={2,4,6,8};
    merger(a,b,6,4);
}