/*
Decimal To Binary          Binary To Decimal
N  Q  R ^                  n=100101
37 18 1 |                   d=n%2
18  9 0 |                   dec=dec+(d*2^i)
9   4 1 | 100101=37         n=n/2
4   2 0 |
2   1 0 |
1   0 1 |
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10], n, i;

    cin >> n;

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }

    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }

    return 0;
}