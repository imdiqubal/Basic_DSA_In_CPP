/*
a,b,c are three numbers such that:
                                  square of the largest number = sum of square of other two numbers
*/

#include<bits/stdc++.h>
using namespace std;

bool pythagorean_triplet(int x, int y, int z){

    int max,t1,t2;
    if(x>y && x>y) {max=x, t1=y, t2=z;}
    else if(y>x && y>z) {max=y, t1=x, t2=z;}
    else {max=z, t1=x, t2=y;}

    if(pow(max,2)==(pow(t1,2)+pow(t2,2))) return 1;
    else return 0;
}

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    
    if(pythagorean_triplet(a,b,c)==1){cout<<a<<", "<<b<<" & "<<c<<" is pythagorean triplets";}
    
    else{cout<<a<<", "<<b<<" & "<<c<<" is not a pythagorean triplets";}

    return 0;
}