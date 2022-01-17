#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m,r=0,d=0;
    
    cin>>n;
    m=n;
    
    while(m!=0)
    {
        d=(m%10); 
        m=m/10; 
        r=(r*10)+d;
        
    }
    
    if(n==r) {cout<<n<<" IS A PALINDROME";}
    else {cout<<n<<" IS NOT A PALINDROME";}
          
    return 0;
}