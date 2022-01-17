/* n=9; rows=3; column=9
    *       *     1        13 17         
  *   *   *   *   2     22 24 26 28
*       *       * 3      31 35 39  
1 2 3 4 5 6 7 8 9      Divisible by 4  print '*' 
                       except 24 &28 i.e, row=2 and col is divisible by 4
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    
    for(int i=1; i<=3; i++){
        for(int j=1;j<=9;j++){
            if((i+j)%4==0||(i==2)&&(j%4==0)){cout<<"* ";}
            else{cout<<"  ";}
        }cout<<endl;
    }
    return 0;
}
