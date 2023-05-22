// Suppose you have to give Rs N to your friend.
// Assume that you have enough number of 500, 200, 100, 50, 20, 10 rupee notes each at your disposal.
// Your goal is to give Rs N to your friend with minimum number of notes.
// For example, you can give Rs 600 can be given using 3 Rs 200 notes as well as using 1 Rs 500 note and 1 Rs 100 note.
// However, since the latter one uses minimum number of notes, so it will be the chosen solution.
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int rs[6] = {500, 200, 100, 50, 20, 10};
    int n;
    cin >> n;
    int i = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int a = n / rs[i];
        if (a > 0)
        {
            ans.push_back(a);
            n = n - rs[i] * a;
        }
        else
            continue;
    }
    int sum = 0;
    for (int i = 0; i < ans.size(); i++)
        sum = sum + ans[i];

    cout << sum;
    return 0;
}
