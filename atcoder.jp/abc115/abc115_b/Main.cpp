#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int s;
  cin>>s;
  vector<int>vec(s);
  for(int i=0;i<s;i++){
    cin>>vec[i];
  }
  sort(vec.begin(),vec.end());
  int sum=0;
  for(int i=0;i<s;i++){
    sum+=vec[i];
  }
  cout<<sum-vec[s-1]/2<<endl;
}
