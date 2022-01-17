/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,k,l;
    cin>>n;
    cout<<endl;

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(k=i; k>=1; k--){
            cout<<k<<" ";
        }
        k+=2;
        for(l=k; l<=i; l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}