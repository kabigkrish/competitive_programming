#include<bits/stdc++.h>
using namespace std;

//consequtive subsequence is 1,2,6,3,4,5  ->answer is 5;

int naive(int a[],int n)
{
    sort(a,a+n);
    int    res=1,curr=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1]+1) curr++;
        else
        {
            res=max(res,curr);
        } 
    }
    return max(res,curr);

}
int effiecient(int a[],int n)
{
    return 0;
}
int main()
{
    int a[6]={1,2,9,3,4,6};
    cout<<naive(a,6);
    cout<<effiecient(a,6);


}