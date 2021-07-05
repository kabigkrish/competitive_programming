#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a="abcdef";
    string rev=a;
    reverse(rev.begin(),rev.end());
    if (a==rev) cout<<"palindrome";
    else cout<<"Not palindrome";

    // this runs in o(n);
}