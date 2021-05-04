#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
    int key=a[i];//temp variable to store current value
    int j=i-1;  
    while(j>=0 && a[j]>key) //if val is greater than key pushing 1 position forward to create space 
    {
        a[j+1]=a[j];// prev value given to current value
        j--;
    }
     a[j+1]=key; //space created and key is inserted to sorted part
    }
 
    for(int i=0;i<5;i++)
    cout<<a[i]<<endl;
}
int main()
{
    int a[5]={4,3,2,1,5};
    insertion_sort(a,5);
}