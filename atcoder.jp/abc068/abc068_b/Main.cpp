#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a;
  cin >>a;
  int tmp,tmp1,cnt,ans1;
  int ans=0;
  for(int i=1;i<a+1;i++){
    tmp=i;
    cnt=0;
    while(tmp%2==0){
    tmp1=tmp;
    tmp=tmp/2;
    cnt++;
  }
    if(cnt>ans){
      ans=cnt;
      ans1=i;
    }
  }
  if(a==1)
    ans1=1;
  cout<<ans1<<endl;
}
