#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int cnt =0;
  int ans=0;
  for(int i=0;i<s.size();i++){
    if(s.at(i)=='A'||s.at(i)=='C'||s.at(i)=='G'||s.at(i)=='T')
      cnt++;
    else
      cnt=0;
    if(cnt>ans)
      ans=cnt;
    }
  cout<<ans<<endl;
  }
      
