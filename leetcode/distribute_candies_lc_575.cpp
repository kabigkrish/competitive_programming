/*
575. Distribute Candies
Easy

Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor.

The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice.

Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.

 

Example 1:

Input: candyType = [1,1,2,2,3,3]
Output: 3
Explanation: Alice can only eat 6 / 2 = 3 candies. Since there are only 3 types, she can eat one of each type.

Example 2:

Input: candyType = [1,1,2,3]
Output: 2
Explanation: Alice can only eat 4 / 2 = 2 candies. Whether she eats types [1,2], [1,3], or [2,3], she still can only eat 2 different types.

Example 3:

Input: candyType = [6,6,6,6]
Output: 1
Explanation: Alice can only eat 4 / 2 = 2 candies. Even though she can eat 2 candies, she only has 1 type.

 

Constraints:

    n == candyType.length
    2 <= n <= 104
    n is even.
    -105 <= candyType[i] <= 105


(/
// class Solution {
// public:
//     int distributeCandies(vector<int>& candyType) {
//        map<int,int>candy;
//         for(int x:candyType)
//         {
//             candy[x]++;
//         }
//         return (candyType.size()/2>candy.size())?candy.size():candyType.size()/2;

//     }
// };

// using unordered set reduces runtime;

class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        unordered_set<int> us(candyType.begin(), candyType.end());
        int maxAllowed = candyType.size() / 2;
        return min((int)us.size(), maxAllowed);
    }
};