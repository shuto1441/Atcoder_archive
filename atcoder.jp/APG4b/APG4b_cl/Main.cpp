#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  
  for(int i = 0; i < N; i++){
    string a;
    int b;
    cin >> a >> b;
    if(a == "+"){
      A += b;
      cout << i+1<<":";
      cout << A << endl;
    }
    if(a == "-"){
      A -= b;
      cout << i+1<<":";
      cout << A << endl;
    }
    if(a == "*"){
      A *= b;
      cout << i+1<<":";
      cout << A << endl;
    }
    if(a == "/"){
      if(b == 0){
        cout << "error" << endl;
        break;
      }
      else{
        A /= b;
        cout << i+1<<":";
        cout << A << endl;
      }
    }
  }
      
      
      
}


