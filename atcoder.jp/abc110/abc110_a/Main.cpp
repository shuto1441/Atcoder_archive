#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b,c;
  cin >> a>>b>>c;
  int ans;
  int max1=max(max(a,b),max(b,c));
  if(max1==a)
    ans=10*a+b+c;
  else if(max1==b)
    ans=10*b+a+c;
  else
    ans=10*c+a+b;

  cout<<ans<<endl;
}

