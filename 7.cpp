#include <bits/stdc++.h>
using namespace std;
long long int prime_Fact(long long int n, long long int m)
{
    if (m % n == 0)
    {
        return n;
    }

    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            return i;
        }
    }
    return 1;
}
long long int euclid_gcd(long long int n, long int m, long long int count)
{
    while (count++ || n != 0)
    {
        int rem = m % n;
        m = n;
        n = rem;
    }
    return m;
}

long long int middle_school(long long int n, long long int m)
{
    int arr1[n],arr2[m];
    for (int i = n,j=0; i >= 1; j++,i--)
    {
        if (n % i == 0)
        {
            arr1[j]= i;
        }
        if (m % i == 0)
        {
            arr2[j] = i;
        }
    }

    return 1;
}

int main()
{
    long long int n, m;
    cout << "Enter the 2 numbers\n";
    cin >> n >> m;
    //long long int ansCommon = prime_Fact(n, m);
    //long long int ansEuclid = euclid_gcd(n, m,0);

    cout << "The GCD of " << n << " and " << m << " is " << prime_Fact(n,m)<< endl;
    return 0;
}