/*
1 2 3 4 5
        * 1
      * * 2 
    * * * 3 
  * * * * 4 
* * * * * 5
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    for (int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(i<=j) {cout<<"* ";}        
            else {cout<<"  ";}
        } 
        cout<<endl;
    }
    
    return 0;
}