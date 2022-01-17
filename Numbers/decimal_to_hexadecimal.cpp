#include <bits/stdc++.h>
using namespace std;

string decimal_to_hexadecimal(int a)
{

    int i = 1, digit;
    string hexadecimal = "";

    while (i <= a)
    {

        i *= 16;
    }

    i /= 16;

    while (i > 0)
    {

        int lastDigit = a / i;
        a -= lastDigit * i;
        i /= 16;

        if (lastDigit <= 9)
            hexadecimal = hexadecimal + to_string(lastDigit);

        else
        {
            char c = 'A' + lastDigit - 10;
            hexadecimal.push_back(c);
        }
    }

    return hexadecimal;
}

int main()
{

    int n;
    string ans;
    cin >> n;
    cout << endl;

    ans = decimal_to_hexadecimal(n);
    cout << ans;

    return 0;
}