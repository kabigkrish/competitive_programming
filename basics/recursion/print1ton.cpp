#include<bits/stdc++.h>
using namespace std;

void print1ton(int n)
{
    if(n==0) return;
    print1ton(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    print1ton(n);
}

/*not tail recursive solution 

that is there is some part of code after recursion which will take more time to execute
than tail recursive method.

tail recursive code is optimised by modern compilers which will reduce space.

*/
