// Implement the MapSum class :

//     MapSum() Initializes the MapSum object.void insert(String key, int val) Inserts the key
//     - val pair into the map.If the key already existed,
//     the original key - value pair will be overridden to the new one.int sum(string prefix) Returns the sum of all the pairs' value whose key starts with the prefix.

//                        Example 1 :

//     Input
//         ["MapSum", "insert", "sum", "insert", "sum"]
//         [[], [ "apple", 3 ], ["ap"], [ "app", 2 ], ["ap"]] Output
//             [null, null, 3, null, 5]

//     Explanation
//     MapSum mapSum = new MapSum();
// mapSum.insert("apple", 3);
// mapSum.sum("ap"); // return 3 (apple = 3)
// mapSum.insert("app", 2);
// mapSum.sum("ap"); // return 5 (apple + app = 3 + 2 = 5)

// Constraints :

//     1 <= key.length,
//     prefix.length <= 50 key and prefix consist of only lowercase English letters.1 <= val <= 1000 At most 50 calls will be made to insert and sum.

//                                                                                              Accepted 72,
//     972 Submissions 128, 070

class MapSum
{
public:
    /** Initialize your data structure here. */
    int ans = 0;         //for the final anser
    map<string, int> mp; // the map which will store the values with key
    MapSum()
    {
        //no need to put anything here
    }

    void insert(string key, int val)
    {

        if (mp.find(key) == mp.end())
        {
            mp.insert({key, val});
        }
        else
        {
            mp[key] = val; //if there is already a key then update previous value to the new value
        }
    }

    int sum(string prefix)
    {
        ans = 0;
        for (auto x : mp)
        {

            //check for prefix
            string word = x.first;
            int i = 0, j = 0;
            while (j < prefix.size())
            {
                if (word[i] == prefix[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    break;
                }
            }
            //after breaking the while loop if j is not the end of string then it is not the word which has the required prefix.
            if (j == prefix.size())
            {
                ans = ans + x.second; //if j== end of prefix string add the value to the ans
            }
        }

        return ans;
    }
};