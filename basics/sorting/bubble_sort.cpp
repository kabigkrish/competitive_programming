#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{
    //optimization
    //use a swaped variable ,set it to false after every iteration;
    //change it to true after swaping any element of array
    //if nothing swaped which means swap is false after loop so break the loop
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]); 
            swapped=true; 
        }
        if(swapped==false) break;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
}
int main()
{
    int a[5]={4,3,2,1,5};
    bubble_sort(a,5);
}