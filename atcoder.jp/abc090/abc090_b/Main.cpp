#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int a,b;
  cin >> a >> b;
  int cnt = 0;
  int n =a;
  
  
  for(int i = a; i < b+1; i++){
     if((n/10000==n%10)&&(n/1000%10)==(n/10%10))
       cnt ++;
     n++;
  }
     
    cout << cnt << endl;

}
    
