#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    int v=4;
    vector<int>adj[v];
    addedge(adj,0,1);
    addedge(adj,1,0);
    addedge(adj,1,2);
    addedge(adj,1,3);
    
}