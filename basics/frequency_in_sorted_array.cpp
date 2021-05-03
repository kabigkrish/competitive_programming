#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6]={1,2,2,2,3,4};
    int freq=1;
    vector<int>out;
    for(int i=1;i<6;i++)
    {
        if(a[i-1]==a[i])
        freq+=1;
        else
        {
        out.push_back(freq);
        freq=1;
}
        
    }   
    out.push_back(freq); 
    for(auto i:out)
    cout<<i;
}