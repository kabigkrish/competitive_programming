#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6]={10,20,30,40,50,600};
    int x=40;
    int low=0, high=6;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(x==a[mid]) 
        {
            cout<<mid; 
            break;
        }
        else if (x>a[mid]) low=mid+1;
        else if (x<a[mid]) high =mid-1;
    }

} 
