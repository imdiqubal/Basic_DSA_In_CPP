/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            temp=i+j;
            if(temp%2==0){cout<<"1 ";}
            else{cout<<"0 ";}
        }
        cout<<endl;
    }
}