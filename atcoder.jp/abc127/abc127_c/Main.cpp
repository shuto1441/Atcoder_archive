#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  cin>>N>>M;
  vector<int> a(M);
  vector<int> b(M);
  for (int i = 0; i < M; i++) {
    cin >> a.at(i)>>b.at(i);
   }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if(b[0]>=a[M-1])
    cout<<b[0]-a[M-1]+1<<endl;
  else
    cout<<0<<endl;
}

      



