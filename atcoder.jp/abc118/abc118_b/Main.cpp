#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  int a;
  cin>>n>>m;
  vector<int>k(n);
  vector<int>cnt(m,0);
  for(int i=0;i<n;i++){
    cin>>k[i];
    for(int j=0;j<k[i];j++){
      cin>>a;
      a--;
      cnt[a]++;
    }
  }
  int ans=0;
  for(int i=0;i<m;i++){
    if(cnt[i]==n)
      ans++;
  }
  cout<<ans<<endl;
  

}

