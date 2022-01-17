#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sq, f = 0;

    cin >> n;
    m = n;
    sq = n * n;

    while (m > 0)
    {
        if (m % 10 != sq % 10)
            f = 1;
        m = m / 10;
        sq = sq / 10;
    }

    if (f == 1)
    {
        cout << n << " IS NOT AUTOMORPHIC";
    }
    else
    {
        cout << n << " IS AUTOMORPHIC";
    }

    return 0;
}