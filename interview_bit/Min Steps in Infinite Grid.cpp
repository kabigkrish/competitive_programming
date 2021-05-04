// Problem Description

// You are in an infinite 2D grid where you can move in any of the 8 directions

//  (x,y) to 
//     (x+1, y), 
//     (x - 1, y), 
//     (x, y+1), 
//     (x, y-1), 
//     (x-1, y-1), 
//     (x+1,y+1), 
//     (x-1,y+1), 
//     (x+1,y-1) 

// You are given a sequence of points and the order in which you need to cover the points.. Give the minimum number of steps in which you can achieve it. You start from the first point.

// NOTE: This question is intentionally left slightly vague. Clarify the question by trying out a few cases in the “See Expected Output” section.



// Input Format

// Given two integer arrays A and B, where A[i] is x coordinate and B[i] is y coordinate of ith point respectively.


// Output Format

// Return an Integer, i.e minimum number of steps.


// Example Input

// Input 1:

//  A = [0, 1, 1]
//  B = [0, 1, 2]



// Example Output

// Output 1:

//  2

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public: 
    int coverPoints(vector<int> &x, vector<int> &y) {
     int n=x.size(),ans=0;
    for(int i=0;i<n-1;i++){
        if(abs(x[i]-x[i+1])<=abs(y[i]-y[i+1]))
         ans+=abs(y[i]-y[i+1]);
        else{
            ans+=abs(x[i]-x[i+1]);
        }
    }
    return ans; 
    }
};

int main()
{
    vector<int> A={0,1,1};
    vector<int> B={0,1,2};
    Solution solution;
    cout<<solution.coverPoints( A , B);
    
}