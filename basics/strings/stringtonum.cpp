#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string inp;
        int maxin = 0;
        string curr;
        getline(cin, inp);
        cout << "before for";
        for (int i = 0; i < inp.size(); i++)
        {
            if ((inp[i] - '0') >= 0 && (inp[i] - '0') <= 9)
            {
                curr += inp[i];

                maxin = max(stoi(curr), maxin);
            }
            else
                curr.clear();
        }
        cout << maxin;
    }
}
