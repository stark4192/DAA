// knapsack
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

template <size_t r, size_t c>
int knapsack(int n, int wt[], int val[], int W, int *t[])
{
    if (n == 0 || W == 0)
        return 0;
    if (t[n][W] != -1)
        return t[n][W];
    if (wt[n - 1] <= W)
        return t[n][W] = max(val[n - 1] + knapsack(n - 1, wt, val, W - wt[n - 1], t), knapsack(n - 1, wt, val, W, t));
    else if (wt[n - 1] > W)
        return t[n][W] = knapsack(n - 1, wt, val, W, t);
}

int main()
{

    int n;
    cout << " enter the number of items : ";
    cin >> n;
    int wt[n];
    int val[n];
    cout << "enter weight & value";
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    cout << "enter capacity : ";
    int W;
    cin >> W;
    int t[n + 1][W + 1];
    memset(t, -1, sizeof(t));
    int profit = knapsack(n, wt, val, W, t);
    cout << profit;
    return 0;
}