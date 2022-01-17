/* n=4; 2*n rows and cols
1234|1234
*   |   *1
**  |  **2
*** | ***3
****|****4
----------
****|****4
*** | ***3
**  |  **2
*   |   *1
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;

    for(int i=1;i<=n;i++){
        for(int j=1; j<=n; j++){
            if(j<=i){cout<<"*";}
            else {cout<<" ";}
        }

        for(int k=n;k>=1;k--){
            if(k<=i){cout<<"*";}
            else {cout<<" ";}
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        for(int j=1; j<=n; j++){
            if(j<=i){cout<<"*";}
            else {cout<<" ";}
        }

        for(int k=n;k>=1;k--){
            if(k<=i){cout<<"*";}
            else {cout<<" ";}
        }
        cout<<endl;
    }

    return 0;
}

