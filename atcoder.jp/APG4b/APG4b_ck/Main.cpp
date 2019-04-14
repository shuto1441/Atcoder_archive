#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int a=0,b=0;
  for(int i=0; i < S.size(); i++){
    if(S.at(i)=='+')
      a++;
    if(S.at(i)=='-')
      b++;        
}
  cout << 1+a-b << endl;
}
    

