#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, d, sum=0;

    cin>>n;

    m=n;

    while(m!=0)
    {
        d=m%10;
        sum=sum+d;
        m=m/10;
    }

    cout<<sum;

}