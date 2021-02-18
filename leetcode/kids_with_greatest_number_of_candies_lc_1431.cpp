#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int most_candy =0;
        for(auto i: candies)
        {
            if(i>most_candy)
                most_candy=i;

        }
        vector<bool> out;
        for(auto i:candies)
        {
            if((i+extraCandies)>=most_candy)
                out.push_back(true);
            else
                out.push_back(false);
        }
        return out;
    }

  };
int main()
{
  int extraCandies=2;
  vector<int> candies{1,2,3,4,5};
  Solution solution;
  solution.kidsWithCandies(candies,extraCandies);
}
