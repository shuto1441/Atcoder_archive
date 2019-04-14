#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n,k;
  cin >> n >>k;
  int cnt = 1;
  
  for(int i = 0; i < n; i++){
     if(cnt > k)
       cnt += k;
     else
       cnt *= 2;
  }
    cout << cnt << endl;

}
    
