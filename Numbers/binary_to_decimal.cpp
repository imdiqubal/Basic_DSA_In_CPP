/*
Binary To Decimal
n=100101
d=n%2
dec=dec+(d*2^i)
n=n/2
*/

#include <bits/stdc++.h>
using namespace std;

int binary_to_decimal(int a)
{

    int i = 0, digit, decimal = 0;

    while (a != 0)
    {

        digit = a % 2;
        decimal = decimal + (digit * pow(2, i));
        a /= 10;

        i++;
    }
    return decimal;
}

int main()
{

    int n, ans;
    cin >> n;
    cout << endl;

    ans = binary_to_decimal(n);
    cout << ans;

    return 0;
}