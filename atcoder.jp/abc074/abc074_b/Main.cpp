#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n,k,a;
  cin >> n >>k;
  int cnt = 0;
  
  
  for(int i = 0; i < n; i++){
     cin >> a;
     if(a < k -a )
       cnt += 2*a;
     else
       cnt += 2*(k-a);
  }
    cout << cnt << endl;

}
    