#include <bits/stdc++.h>
using namespace std;

int hexadecimal_to_decimal(string a){

    int decimal=0, power_of_sixteen=1;

    int s=a.size();

    for(int i=s-1; i>=0; i--){

        if(a[i]>='0' && a[i]<='9')
        {decimal+= power_of_sixteen * (a[i]-'0');}

        else if(a[i]>='A' && a[i]<='F')
        {decimal+= power_of_sixteen * (a[i]- 'A' + 10);}

        power_of_sixteen*=16;
    }

    return decimal;
}

int main(){

    string n;
    cin>>n;

    int ans;
    ans=hexadecimal_to_decimal(n);
    cout<<ans;

    return 0;
}