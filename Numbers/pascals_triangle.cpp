/*
1 0C0
1 1C0 1 1C1
1 2C0 2 2C1 1 2C2
1 3C0 3 3C1 3 3C2 1 3C3
1 4C0 4 4C1 6 4C2 4 4C3 1 4C4

Ai,j = iCj 
*/

#include <bits/stdc++.h>
using namespace std;

int factorial(int l){
    int fact=1;
    for(int i=1; i<=l; i++){
        fact*=i;
    }
    return fact;
}

int nCr(int a, int b){

    int d;
    d=factorial(a)/(factorial(b)*factorial(a-b));
    return d;
}

int main(){

    int n;
    cin>>n;

    cout<<endl;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
           int C=nCr(i,j);
           cout<<C<<" ";
        }
        cout<<endl;
    } 
    return 0;
}