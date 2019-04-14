#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  int a,b;
  int cnt = 0;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> a >> b;
    cnt+=b-a+1;           
  }
    cout << cnt << endl;
}
    