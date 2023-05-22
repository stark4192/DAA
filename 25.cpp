//longest common palindromic subsequence

class Solution
{
public:
    string longestPalindrome(string s)
    {

        int k = s.length();
        string s3 = s;
        reverse(s3.begin(), s3.end());

        char s1[k + 1];
        strcpy(s1, s.c_str());

        // reverse(s1.begin(), s1.end());

        cout << s1 << endl;

        char s4[k + 1];
        strcpy(s4, s3.c_str());

        char s2[k + 1];
        strncpy(s2, s4, k + 1);

        cout << s2;

        int m = strlen(s1);
        int n = strlen(s2);

        int dp[20][20];
        for (int i = 0; i <= m; i++)
            dp[i][0] = 0;
        for (int j = 0; j <= n; j++)
            dp[0][j] = 0;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else if (dp[i - 1][j] >= dp[i][j - 1])
                    dp[i][j] = dp[i - 1][j];

                else
                    dp[i][j] = dp[i][j - 1];
            }
        }
        int idx = dp[m][n];
        char lcsAlgo[idx + 1];
        lcsAlgo[idx] = '\0';

        int i = m, j = n;
        while (i > 0 && j > 0)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                lcsAlgo[idx - 1] = s1[i - 1];
                i--;
                j--;
                idx--;
            }
            else if (dp[i - 1][j] >= dp[i][j - 1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
        return lcsAlgo;
    }
};