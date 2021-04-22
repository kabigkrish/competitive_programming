// You are given an array points where points[i] = [xi, yi] is the coordinates of the ith point on a 2D plane. Multiple points can have the same coordinates.

// You are also given an array queries where queries[j] = [xj, yj, rj] describes a circle centered at (xj, yj) with a radius of rj.

// For each query queries[j], compute the number of points inside the jth circle. Points on the border of the circle are considered inside.

// Return an array answer, where answer[j] is the answer to the jth query.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries)  
{
vector<int>answer;
for(int j=0;j<queries.size();j++)
{
int counter=0;
for(int i=0;i<points.size();i++)
{
if(sqrt(pow(queries[j][0]-points[i][0],2)+pow(queries[j][1]-points[i][1],2))<=queries[j][2] )
counter++;
}
answer.push_back(counter);
}
return answer;
}
};

int main()
{
    Solution s; 
    vector<vector<int>>points={{1,3},{3,3},{5,3},{2,2}};
    vector<vector<int>>queries={{2,3,1},{4,3,1},{1,1,2}};
    s.countPoints(points,queries);
}