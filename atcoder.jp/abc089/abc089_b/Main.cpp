#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  string s;
  int cnt = 0;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> s;
    if(s == "Y"){
     cnt++;
    }       
  }
  if(cnt > 0)
    cout << "Four" << endl;
  else
    cout << "Three" << endl;
}
    