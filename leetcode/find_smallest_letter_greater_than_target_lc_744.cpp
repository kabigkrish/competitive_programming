// 744. Find Smallest Letter Greater Than Target
// Easy

// Given a list of sorted characters letters containing only lowercase letters, and given a target letter target, find the smallest element in the list that is larger than the given target.

// Letters also wrap around. For example, if the target is target = 'z' and letters = ['a', 'b'], the answer is 'a'.

// Examples:

// Input:
// letters = ["c", "f", "j"]
// target = "a"
// Output: "c"

// Input:
// letters = ["c", "f", "j"]
// target = "c"
// Output: "f"

// Input:
// letters = ["c", "f", "j"]
// target = "d"
// Output: "f"

// Input:
// letters = ["c", "f", "j"]
// target = "g"
// Output: "j"

// Input:
// letters = ["c", "f", "j"]
// target = "j"
// Output: "c"

// Input:
// letters = ["c", "f", "j"]
// target = "k"
// Output: "c"

// Note:

//     letters has a length in range [2, 10000].
//     letters consists of lowercase letters, and contains at least 2 unique letters.
//     target is a lowercase letter.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
char nextGreatestLetter(vector<char>& letters, char target) 
{
   int idx = upper_bound(letters.begin(), letters.end(), target) - letters.begin();
    
    if(idx == letters.size())
        return letters[0];
    return letters[idx];  
   
}
}; 
int main()
{
    
}