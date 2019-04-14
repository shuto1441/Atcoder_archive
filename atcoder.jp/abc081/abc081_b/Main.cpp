#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n,a;
  cin >> n;
  int min = 10000;
  
  
  for(int i = 0; i < n; i++){
    cin >> a;
    int cnt = 0;
      while(a%2==0){
        a /=2;
        cnt ++;
     }
      if(cnt < min)
        min =cnt;
  }
     
    cout << min << endl;

}
    

