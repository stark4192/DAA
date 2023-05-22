#include <bits/stdc++.h>
using namespace std;
void lcs(vector<vector<string>> &b,
         vector<vector<int>> &c,
         string x, string y)
{
    int m = x.size();
    int n = y.size();
    for (int i = 1; i <= m; i++)
    {
        c[i][0] = 0;
    }
    for (int j = 0; j <= n; j++)
    {
        c[0][j] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (x[i] == y[j])
            {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = "Diagonal";
            }
            else if (c[i - 1][j] >= c[i][j - 1])
            {
                c[i][j] = c[i - 1][j];
                b[i][j] = "Up";
            }
            else
            {
                c[i][j] = c[i][j - 1];
                b[i][j] = "Left";
            }
        }
    }
}
int main()
{
    string x, y;
    x = "HUMAN";
    y = "CHIMPANZEE";
    int m = x.size();
    int n = y.size();
    vector<vector<string>> b(m, vector<string>(n, ""));
    vector<vector<int>> c(m + 1, vector<int>(n + 1, 0));
    lcs(b, c, x, y);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j] << "\t" << b[i][j];
        }
        cout << endl;
    }
}