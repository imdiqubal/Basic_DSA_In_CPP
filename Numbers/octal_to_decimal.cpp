#include <bits/stdc++.h>
using namespace std;

int octal_to_decimal(int a){

    int decimal=0, digit, power_of_eight=1;

    while(a>0){
        digit=a%10;
        decimal+=digit*power_of_eight;
        power_of_eight*=8;
        a/=10;
    }

    return decimal;
}


int main(){

    int n,ans;
    cin>>n;
    
    ans=octal_to_decimal(n);

    cout<<ans;

    return 0;
}