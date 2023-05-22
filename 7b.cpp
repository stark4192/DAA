#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000000
int spf[MAXN];
int steps_1;
int step2;
int step3 = 0;
int gcd_euclid(int a, int b)
{
    if (a == 0)
    {
        steps_1++;
        return b;
    }
    if (b == 0)
    {
        steps_1++;
        return a;
    }

    if (a == b)
    {
        steps_1++;
        return a;
    }

    if (a > b)
    {
        steps_1++;
        return gcd_euclid(a - b, b);
    }
    steps_1++;
    return gcd_euclid(a, b - a);
}

int GCDAlgo2(int number1, int number2)
{

    int minimum = (number1 < number2) ? number1 : number2;
    step2++;
    while (minimum != 0)
    {
        step2++;
        if (number1 % minimum == 0)
        {
            step2++;
            if (number2 % minimum == 0)
            {
                step2++;
                return minimum;
            }
        }
        minimum--;
    }
    return 1;
}

void sieve()
{

    spf[1] = 1;
    step3++;
    for (int i = 2; i < MAXN; i++)
    {
        step3++;
        spf[i] = i;
    }
    for (int i = 4; i < MAXN; i += 2)
    {
        step3++;
        spf[i] = 2;
    }

    for (int i = 3; i * i < MAXN; i++)
    {
        step3++;
        if (spf[i] == i)
        {
            step3++;
            for (int j = i * i; j < MAXN; j += i)
            {
                step3++;
                if (spf[j] == j)
                {
                    step3++;
                    spf[j] = i;
                }
            }
        }
    }
}

vector<int> getFactorization(int x)
{
    vector<int> ret;
    step3++;
    while (x != 1)
    {
        step3++;
        ret.push_back(spf[x]);
        step3++;
        x = x / spf[x];
    }
    step3++;
    return ret;
}
void gcd_algo3(int a, int b)
{
    step3++;
    sieve();
    step3++;
    vector<int> p = getFactorization(a);
    step3++;

    vector<int> p1 = getFactorization(b);
    step3++;
    vector<int> v(p.size() + p1.size());
    step3++;
    vector<int>::iterator it, st;
    step3++;
    it = set_intersection(p.begin(), p.end(), p1.begin(), p1.end(), v.begin());
    step3++;
    int gcdd = 1;
    step3++;
    for (st = v.begin(); st != it; ++st)
    {
        step3++;
        gcdd = gcdd * *st;
    }
    step3++;
    cout << gcdd;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd_euclid(a, b);
    cout << endl
         << "Euclidean algo steps = " << steps_1 << endl;
    cout << GCDAlgo2(a, b) << endl;
    cout << "consecutive integer steps = " << step2 << endl;
    gcd_algo3(a, b);

    cout << endl
         << "middle school steps = " << step3;
    return 0;
}