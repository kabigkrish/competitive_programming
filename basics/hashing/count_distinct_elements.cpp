#include<bits/stdc++.h>
using namespace std;

void count(int arr[])
{
    unordered_set<int> name(arr,arr+5);
    cout<<name.size();
}
int main()
{
    int arr[5]={1,2,1,2,3};
    count(arr);
}


/*
time complexity : O(n)
aux space complexity: O(n)
*/