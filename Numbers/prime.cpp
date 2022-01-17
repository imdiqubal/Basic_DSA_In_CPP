#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,flag=0,m=0;
    cin>>n;
    
    for(i=2; i<sqrt(n); i++)
    {
        if((n%i)==0) 
        {
            cout<<"Prime Number";
            flag=1;
            break;
        }    
    }

    if(flag==0) cout<<"Composite Number";
    
    return 0;
}