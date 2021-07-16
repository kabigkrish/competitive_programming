#include <bits/stdc++.h>
using namespace std;

int naive(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                return i;
            }
        }
    }
    return -1;
}
int eff1(string &s)
{
    const int CHAR = 256;
    int arr[CHAR];
    fill(arr, arr + CHAR, -1);
    int res = INT_MAX;
    for (int i = 0; i < s.length(); i++)
    {
        if (arr[s[i]] == -1)
            arr[s[i]] = i;
        else
            res = min(res, arr[s[i]]);
    }
    return (res == INT_MAX) ? -1 : res;
}
int main()
{
    string s1 = "afds;lkj;";
    cout << "naive:" << naive(s1) << endl;
    cout << "eff1:" << eff1(s1);
}