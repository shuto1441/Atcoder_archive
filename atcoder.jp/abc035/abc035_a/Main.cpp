#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
  if(b==0)
    return a;
  return gcd(b,a%b);
}
int main(){
  int n,x;
  cin>>n>>x;
  
  cout<<n/gcd(n,x)<<':'<<x/gcd(n,x)<<endl;
}
