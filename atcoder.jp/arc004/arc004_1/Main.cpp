#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  vector<double>x(N);
  vector<double>y(N);
  for(int i=0;i<N;i++)
    cin>>x[i]>>y[i];
  double ans=0;
  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
      ans = max(ans,sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])));
    }
  }
  cout << ans << endl;
}
