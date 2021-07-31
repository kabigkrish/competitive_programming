// You are using GCC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        int r;
        int h;
        multimap<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cout << "r and h";
            cin >> r;
            cin >> h;
            m.insert(pair<int, int>(r, h));
        }
        multimap<int, int>::iterator values;
        int c = 0;
        int prev = 0;
        for (values = m.begin(); values != m.end(); values++)
        {
            if ((*values).second > prev)
                c += (*values).second;
            prev = (*values).second;
        }
        cout << c;
        t--;
    }
}