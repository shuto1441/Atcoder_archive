#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
  int N,T,A;
  cin>>N>>T>>A;
  vector<int>H(N);
  for(int i=0;i<N;i++){
    cin>>H[i];
  }
  int ans=999999999;
  int ans1;
  for(int i=0;i<N;i++){
    if(ans>abs((T*1000-H[i]*6)-A*1000)){
      ans=abs((T*1000-H[i]*6)-A*1000);
      ans1=i+1;
    }
  }
  cout<<ans1<<endl;
}
    
