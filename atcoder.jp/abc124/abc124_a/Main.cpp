#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a>>b;
  int ans;
  if(a-1>=b)
    ans = 2*a-1;
  else if(a==b)
    ans = a+b;
  else
    ans = 2*b-1;
  cout << ans << endl;
}