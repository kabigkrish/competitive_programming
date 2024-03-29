
//     Asked in:  
//     Google
//     Microsoft

// Given a non-negative number represented as an array of digits,

// add 1 to the number ( increment the number represented by the digits ).

// The digits are stored such that the most significant digit is at the head of the list.

// Example:

// If the vector has [1, 2, 3]

// the returned vector should be [1, 2, 4]

// as 123 + 1 = 124.

//     NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer.
//     For example, for this problem, following are some good questions to ask :

//         Q : Can the input have 0’s before the most significant digit. Or in other words, is 0 1 2 3 a valid input?

//         A : For the purpose of this question, YES
//         Q : Can the output have 0’s before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
//         A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public: 
    int plusOne(vector<int> &a) 
    {
        int sum=0;
        int power=0;
        a[a.size()-1]=a[a.size()-1]+1;
        for(int i=a.size();i>=0;i--)
        {
            sum+=i*pow(10,power);
            power++;
        }
        return sum;
    }

};
int main()
{
    vector<int> A={1,2,3};
    Solution solu;
    cout<<solu.plusOne(A);
}