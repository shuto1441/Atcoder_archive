#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  vector<int>S(N);
  for (int i=0;i<N;i++){
    cin>>S[i];
  }
  int sum=0;
  for (int i=0;i<N;i++){
    sum+=S[i];
  }
  int ans=0;
  int tmp;
  for (int i=0;i<N;i++){
    ans+=S[i];
    if(ans >=sum/2){
      tmp=i;
      break; 
    }
  }
  cout<<min(abs(sum-ans-ans),abs(sum-ans+S[tmp]-ans+S[tmp]))<<endl;
 
}