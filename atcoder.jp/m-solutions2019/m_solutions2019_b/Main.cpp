#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int cnt=0;
  for(int i=0;i<s.size();i++){
    if(s.at(i)=='o')
      cnt++;
  }
  if(cnt+15-s.size()>=8)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}