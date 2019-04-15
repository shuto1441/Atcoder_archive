#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string a;
  cin >> a;
  int ans=0;
  
  for(int i=0;i<4;i++){
    if(a[i]=='+')
      ans++;
    else
      ans--;
  }
  cout<<ans<<endl;

}

