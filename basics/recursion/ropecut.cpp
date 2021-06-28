/*n=rope length 
a b c cut length 
find the max no of peices after cutting*/
#include<bits/stdc++.h>
using namespace std;
int rope(int n,int a,int b,int c)
{
    if(n==0) return 0;
    if(n<0) return -1;
    int temp=max(rope(n-a,a,b,c),rope(n-b,a,b,c));
    int res =max(temp,rope(n-c,a,b,c));
    if(res==-1) return -1;
    return res+1;
}
/*dry run
n=5
a=1
b=2
c=3
iteration 1:
rope(n-a,a,b,c) =>rope(4,1,2,3)   
rope(n-b,a,b,c) =>rope(3,1,2,3)
rope(n-c,a,b,c) =>rope(2,1,2,3)

iteration 2: 
rope(4,1,2,3) 

rope(n-a,a,b,c) =>rope(3,1,2,3)   
rope(n-b,a,b,c) =>rope(2,1,2,3)
rope(n-c,a,b,c) =>rope(1,1,2,3)

iteration 3: 
rope(n-a,a,b,c) =>rope(2,1,2,3)

iteration 4: 
rope(1,1,2,3)

iteration 5: 
rope(0,1,2,3);
rope(-1.1,2,3)
rope(-2,1,2,3)
so max= rope(0,1,2,3)
n=0 base case so result will be 0+1 which is 1

n-c will also give one result which is 0+1=1
now max(1,1) is 1 
so the final answer is res+1= 1+1 =2
*/
int main()
{
    int n=23,a=11,b=9,c=12;
    cout<<rope(n,a,b,c);
}