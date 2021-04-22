// You are given an array points where points[i] = [xi, yi] is the coordinates of the ith point on a 2D plane. Multiple points can have the same coordinates.

// You are also given an array queries where queries[j] = [xj, yj, rj] describes a circle centered at (xj, yj) with a radius of rj.

// For each query queries[j], compute the number of points inside the jth circle. Points on the border of the circle are considered inside.

// Return an array answer, where answer[j] is the answer to the jth query.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void countPoints(vector<vector<int>>& points, vector<vector<int>>& queries)  
{
vector<int>answer;
for(int j=0;j<queries.size();j++)
{
int range_left=queries[j][0]-queries[j][2];
int range_right=queries[j][0]+queries[j][2];
int range_top=queries[j][1]+queries[j][2];
int range_bottom=queries[j][1]-queries[j][2];
int counter=0;
cout<<"------------"<<endl;
for(int i=0;i<points.size();i++)
{   
    if(points[i][0]>=range_left &&points[i][0]<=range_right &&points[i][1]>=range_bottom&&points[i][1]>=range_bottom
        &&sqrt(pow(queries[j][0]-points[i][0],2)+pow(queries[j][1]-points[i][1],2))<=queries[j][2] )
    { 
        counter++;
        cout<<points[i][0]<<" "<<points[i][1]<<endl;
    }
}
answer.push_back(counter);
}
for(auto xd:answer)
cout<<xd;
}
};

int main()
{
    Solution s; 
    vector<vector<int>>points={{1,3},{3,3},{5,3},{2,2}};
    vector<vector<int>>queries={{2,3,1},{4,3,1},{1,1,2}};
    s.countPoints(points,queries);
}