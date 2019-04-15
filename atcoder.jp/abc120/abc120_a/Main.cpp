#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  cin >> a>>b>>c;
  int ans;
  if(a*c<=b)
    ans = c;
  else
    ans = b/a;
  cout << ans << endl;
}
