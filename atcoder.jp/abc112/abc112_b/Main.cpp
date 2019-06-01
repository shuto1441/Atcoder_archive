#include <bits/stdc++.h>
using namespace std;
int main(){
  int N,T;
  cin>>N>>T;
  vector<pair<int, int> > pairs(N);
  for(int i=0;i<N;i++){
        int a;
        int b;
        cin >> a >> b;
        pairs[i] = make_pair(b, a);
    }
  sort(pairs.begin(),pairs.end());
  int ans=1000000000;
  for(int i=0;i<N;i++){
    if(pairs[i].first<=T)
      ans=min(ans,pairs[i].second);
    else
      break;
  }
  if(ans==1000000000)
    cout<<"TLE"<<endl;
  else
    cout<<ans<<endl;
}
  