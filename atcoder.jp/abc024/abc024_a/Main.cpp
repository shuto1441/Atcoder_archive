#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d,s,t;
  cin>>a>>b>>c>>d>>s>>t;
  
  if(s+t>=d)
    cout<<a*s+b*t-(s+t)*c<<endl;
  else
    cout<<a*s+b*t<<endl;
  
}

