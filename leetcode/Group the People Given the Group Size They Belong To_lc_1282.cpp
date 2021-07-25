/*
1282. Group the People Given the Group Size They Belong To
Medium

There are n people that are split into some unknown number of groups. Each person is labeled with a unique ID from 0 to n - 1.

You are given an integer array groupSizes, where groupSizes[i] is the size of the group that person i is in. For example, if groupSizes[1] = 3, then person 1 must be in a group of size 3.

Return a list of groups such that each person i is in a group of size groupSizes[i].

Each person should appear in exactly one group, and every person must be in a group. If there are multiple answers, return any of them. It is guaranteed that there will be at least one valid solution for the given input.

 

Example 1:

Input: groupSizes = [3,3,3,3,3,1,3]
Output: [[5],[0,1,2],[3,4,6]]
Explanation: 
The first group is [5]. The size is 1, and groupSizes[5] = 1.
The second group is [0,1,2]. The size is 3, and groupSizes[0] = groupSizes[1] = groupSizes[2] = 3.
The third group is [3,4,6]. The size is 3, and groupSizes[3] = groupSizes[4] = groupSizes[6] = 3.
Other possible solutions are [[2,1,6],[5],[0,4,3]] and [[5],[0,6,2],[4,3,1]].

Example 2:

Input: groupSizes = [2,1,3,3,3,2]
Output: [[1],[0,5],[2,3,4]]

 

Constraints:

    groupSizes.length == n
    1 <= n <= 500
    1 <= groupSizes[i] <= n

Accepted
63,192
Submissions
74,676*/

#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     vector<vector<int>> groupThePeople(vector<int> &groupSizes)
//     {
//         map<int, vector<int>> m;
//         m.insert(pair<int, vector<int>>(1, {1, 2, 3}));
//         for (x : grpsize)
//         m.insert(pair<int,vector<int>>(grpsize[i],{i});
//     }
// };

class Solution
{
public:
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {
        vector<vector<int>> res;
        unordered_map<int, vector<int>> m;

        for (int id = 0; id < groupSizes.size(); ++id)
            m[groupSizes[id]].push_back(id);
        //same as map counter we can push back easily
        for (auto it : m)
        {
            //we are adding it to result vector;
            //i+=it.first means if 3 appers 6 times we cant add all 6 in a single vector
            //we need to spilt as 2 max it can hold is 3; so i+=it.first will give the next vector starting index
            for (int i = 0; i < it.second.size(); i += it.first)

                res.push_back({it.second.begin() + i, it.second.begin() + i + it.first});
        }
        return res;
    }
};
