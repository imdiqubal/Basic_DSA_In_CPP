/* Sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so */

#include<bits/stdc++.h>
using namespace std;

void primeSieve(int n){

    int prime[n+1]={0};

    for(int i=2; i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(prime[i]==0){
          cout<<i<<" ";  
        } 
    }
}

int main(){

    int n;
    cin>>n;

    primeSieve(n);

    return 0;
}