#include <bits/stdc++.h>
using namespace std;

string helper(string s)
{
    string res;
    if (s[0] >= 'a' && s[0] <= 'z')
        res = s[0] - 32;
    else
        res = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            if ((i + 1) < s.size())
            {
                if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                    res += s[i + 1] - 32;
                else
                    res += s[i + 1];
            }
            i++;
        }
        else
            res += s[i];
    }
    return res;
}

int main()
{
    cout << helper("hello everyone i am hello");
    return 0;
}