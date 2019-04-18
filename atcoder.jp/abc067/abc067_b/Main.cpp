#include <bits/stdc++.h>
using namespace std;

// 各桁の和を計算する関数


int main() {
  int N,K;
  cin >> N>>K;
  vector<int>vec(N);
  for (int i = 0; i < N; ++i) 
    cin>>vec[i];
  sort(vec.begin(),vec.end());
  reverse(vec.begin(),vec.end());
  int sum=0;
  for(int i=0;i<K;i++)
    sum+=vec[i];

  cout << sum << endl;
}
