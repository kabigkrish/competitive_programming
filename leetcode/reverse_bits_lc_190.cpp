#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public: 
        uint32_t reverseBits(uint32_t n)
        {
            uint32_t rev=0;
            while(n!=0)
            {
                
                uint32_t last_digit=n%10;
                rev=rev*10+pow(2,last_digit);
                n/=10;
            }
            return rev;
        }
};
int main()
{
    Solution solution;
    uint32_t n=11110000;
    cout<<solution.reverseBits(n);
}