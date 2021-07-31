#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
    {
        vector<int> row(grid[0].size(), 0);
        vector<int> col(grid.size(), 0);
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
        }
        for (auto x : row)
            cout << x << " ";
        return 9;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid = {{1, 2, 3, 4, 5}, {2, 4, 5, 6, 7}, {8, 6, 4, 5, 6}, {9, 7, 5, 6, 7}, {6, 6, 7, 8, 9}};

    int asf = s.maxIncreaseKeepingSkyline(grid);
}