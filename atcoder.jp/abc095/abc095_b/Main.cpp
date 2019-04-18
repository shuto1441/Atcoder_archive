#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,X;
  cin>>N>>X;
  vector<int>m(N);
  int sum=0;
  for(int i=0;i<N;i++){
    cin>>m[i];
    sum+=m[i];
  }
  sort(m.begin(),m.end());
  cout<<(X-sum)/m[0]+N<<endl;

}
