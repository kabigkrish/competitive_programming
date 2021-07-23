/* 
535. Encode and Decode TinyURL
Medium

    Note: This is a companion problem to the System Design problem: Design TinyURL.

TinyURL is a URL shortening service where you enter a URL such as https://leetcode.com/problems/design-tinyurl and it returns a short URL such as http://tinyurl.com/4e9iAk. Design a class to encode a URL and decode a tiny URL.

There is no restriction on how your encode/decode algorithm should work. You just need to ensure that a URL can be encoded to a tiny URL and the tiny URL can be decoded to the original URL.

Implement the Solution class:

    Solution() Initializes the object of the system.
    String encode(String longUrl) Returns a tiny URL for the given longUrl.
    String decode(String shortUrl) Returns the original long URL for the given shortUrl. It is guaranteed that the given shortUrl was encoded by the same object.

 

Example 1:

Input: url = "https://leetcode.com/problems/design-tinyurl"
Output: "https://leetcode.com/problems/design-tinyurl"

Explanation:
Solution obj = new Solution();
string tiny = obj.encode(url); // returns the encoded tiny url.
string ans = obj.decode(tiny); // returns the original url after deconding it.

 

Constraints:

    1 <= url.length <= 104
    url is guranteed to be a valid URL.

*/

/*

how to solve?
1.first all short urls are already seen so we can use a map to track long and short urls
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Encodes a URL to a shortened URL.
    map<string, string> m;
    string encode(string longUrl)
    {
        string key = "https://" + m.size() + 1;
        m.insert(pair<string, string>(key, longUrl));
        return key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        return m.find(shortUrl)->second;
    }
};

int main()
{
    string longurl = "https://www.leetcode.com/problems/strings";
    Solution s;
    cout << s.encode(longurl);
}

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));