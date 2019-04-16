#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b,c;
  cin>>a>>b>>c;
  int cnt=0;
  for(int i=min(a,b);i>0;i--){
    if(a%i==0&&b%i==0)
      cnt++;
    if(cnt==c){
      cout<<i<<endl;
      break;
    }
  }
}
  
