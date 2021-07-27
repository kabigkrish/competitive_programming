#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> p(5);
    // iota will add values from pos to end
    //in this case it will add from 1 2 3 4 5
    iota(p.begin(), p.end(), 1);
    for (int i : p)
        cout << i << " ";

    //remove
    // erase
    //fill
}