// std::set を用いた解
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  for(char i='a';i<='z';i++){
    bool f=false;
    for(int j=0;j<s.size();j++){
      if(i==s[j]){
        f=true;
      }
    }
    if(!f){
      cout<<i<<endl;
      return 0;
    }
  }
  cout<<"None"<<endl;
}

