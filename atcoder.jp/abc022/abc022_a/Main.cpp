#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,s,t;
  cin>>n>>s>>t;
  int ans=0;
  
  vector<int>vec(n);
  for(int i=0;i<n;i++){
    cin>>vec[i];
  }
  int cnt=0;
  for(int i=0;i<n;i++){
    ans+=vec[i];
    if(ans>=s&&ans<=t)
      cnt++;
    }
  cout<<cnt<<endl;

}



