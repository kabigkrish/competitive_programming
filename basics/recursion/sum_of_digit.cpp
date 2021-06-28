#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0) return 0;
    return sum(n/10)+n%10;
    /* n/10 removes the last digit from the number;
    n%10 gives the last digit of the number
    we are dividing into a sub problem of finding sum of(n-1)terms +nth term*/
}
int main()
{
    int n=123;
    cout<<sum(n);
}