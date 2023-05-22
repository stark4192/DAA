#include <bits/stdc++.h>
using namespace std;

void algorithm1(long long int n, long long int count)
{
    for (long long int i = 2; i < n; i++)
    {
        count++;
        if (n % i == 0)
        {
            cout << n << " is not a prime number" << endl;
            cout << "Time : " << count << endl;

            return;
        }
    }
    cout << n << " is a prime number" << endl;
    cout << "Time : " << count << endl;
}
void algorithm2(long long int n, long long int count)
{
    bool ch[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        ch[i] = true;
    }
    for (int i = 2; i <= n; i++)
    {
        count++;
        if (ch[i])
        {
            for (int j = 2; i * j <= n; j++)
            {
                if (ch[i * j])
                {
                    ch[i * j] = false;
                }
            }
        }
    }
    if (ch[n] && n != 1)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    cout << "Time : " << count << endl;
}

void algorithm3(long long int n, long long int count)
{
    for (long long int i = 2; i <= sqrt(n); i++)
    {
        count++;
        if (n % i == 0)
        {
            cout << n << " is not a prime number" << endl;
            cout << "Time : " << count << endl;

            return;
        }
    }
    cout << n << " is a prime number" << endl;
    cout << "Time : " << count << endl;
}

int main()
{
    long long int n, count = 0;
    cout << "Enter the number to check prime\n";
    cin >> n;
    algorithm1(n, 0);
    algorithm2(n, 0);
    algorithm3(n, 0);
    return 0;
}
