#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, m = 0, d = 0, sum = 0;

    cin >> n;

    m = n;

    while (m != 0)
    {
        d = m % 10;
        d = d * d * d; // d=pow(d,3);
        m = m / 10;
        sum = sum + d;
    }

    if (sum == n)
    {
        cout << n << " IS A ARMSTRONG NUMBER";
    }
    else
    {
        cout << n << " IS NOT A ARMSTRONG NUMBER";
    }

    return 0;
}