#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a>>b;
  int ans;
  if(b%a==0)
    ans = a+b;
  else
    ans = b-a;
  cout << ans<<endl;
 
}

