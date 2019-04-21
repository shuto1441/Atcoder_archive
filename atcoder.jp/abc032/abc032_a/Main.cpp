#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
  if(b==0)
    return a;
  return gcd(b,a%b);
}

int main(){
  int a,b,n;
  cin>>a>>b>>n;
  
  int lms=a*b/gcd(a,b);
  
  cout<<(n+lms-1)/lms*lms<<endl;
}
