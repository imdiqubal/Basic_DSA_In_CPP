/*
Pascal's triangle is a triangular array constructed by summing adjacent elements in preceding rows. 
Pascal's triangle contains the values of the binomial coefficient. 
https://www.mathsisfun.com/pascals-triangle.html

Value of element row,col =  (row-1) C (col-1)

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    cout<<endl;
    
    int coef=1;
    
    for(int i=0;i<n;i++){
        for(int space=1; space<=n-i; space++){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            if(j==0||i==0){coef=1;}
            else {coef=coef*(i-j+1)/j; }
            cout<<coef<<" ";
        }cout<<endl;
    }
    
    return 0;
}
