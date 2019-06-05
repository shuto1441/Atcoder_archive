#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int>A(3);
  vector<int>B(3);
  for(int i=0;i<3;i++){
    cin>>A[i]>>B[i];
  }
  int ans=0;
  for(int i=0;i<3;i++){
    ans+=A[i]*B[i]/10;
  }
  cout<<ans<<endl;
  
  
}

      



