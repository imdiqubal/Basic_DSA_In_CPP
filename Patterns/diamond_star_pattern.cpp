/*
      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k,l;
    cin>>n;
    cout<<endl;

    //First half of the diamond
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(k=i; k>=1; k--){
            cout<<"*"<<" ";
        }
        k+=2;
        for(l=k; l<=i; l++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    //Second half of the diamond
    for(i=n; i>=1; i--){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(k=i; k>=1; k--){
            cout<<"*"<<" ";
        }
        k+=2;
        for(l=k; l<=i; l++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}