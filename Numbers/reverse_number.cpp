#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,r=0,d;

    cin>>n;

    m=n;

    while(m!=0)
    {
        d=m%10;
        r=(r*10)+d;
        m=m/10;
    }

    cout<<r;

    return 0;

}