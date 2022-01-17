/*
* * * *
*     *
*     *
*     *
* * * *
Row=5; Col=4
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            if((i==1|i==2|i==3)&(j==1|j==2)){cout<<"  ";}
            else cout<<"* ";
        }cout<<endl;
    }

    return 0;
}