#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >>N;
    vector<string>s(110);
    for(int i=0;i<N;i++)
      cin>>s[i];
    int M;
    cin>>M;
    vector<string>t(110);
    for(int i=0;i<M;i++)
      cin>>t[i];
  
    int maxi=max(N,M);
    int ans=0;
  
    for(int i=0;i<N;i++){
      int cnt=0;
      for(int j=0;j<maxi;j++){
        if(s[i]==s[j])
          cnt++;
        if(s[i]==t[j])
          cnt--;
      }
      ans=max(ans,cnt);
    }
      
    cout<<ans<<endl;         
}
