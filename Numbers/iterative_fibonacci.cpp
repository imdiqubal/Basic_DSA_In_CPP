#include <iostream>
using namespace std;

int main(){
  
  int n,i;
  int f,f0=0,f1=1;

  cin>>n;

  cout<<f0<<" "<<f1<<" ";
  
  for(i=2;i<n;i++)
  {
    f=f0+f1;
    cout<<f<<" ";
    f0=f1;
    f1=f;
  }

  return 0;

}