#include <bits/stdc++.h>
using namespace std;

int recur(int weight[], int profit[], int total, int n)
{
    //base
    if (total == 0 || n < 0)
        return 0;
    if (weight[n] > total)
        return recur(weight, profit, total, n - 1);
    else if (weight[n] < total)
        return max(
            recur(weight, profit, total - weight[n], n - 1),
            profit[n] + recur(weight, profit, total, n - 1));
}
int main()
{
    int weight[5] = {1, 2, 3, 4, 5};
    int profit[5] = {4, 6, 2, 5, 2};
    int total = 4;
    int n = 5;
    cout << recur(weight, profit, total, n);
}