#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  cin >> a;
  int ans = 0;
  for(int i=0;i<3;i++){
    if(a.at(i)=='o')
      ans++;
  }
  cout << ans*100+700 << endl;
}
