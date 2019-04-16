#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,C;
  cin>>N>>M>>C;
  

  // int型の2次元配列(3×4要素の)の宣言
  vector<int>B(M);
  vector<vector<int>> A(N, vector<int>(M));
  
  for(int i=0;i<M;i++){
    cin>>B.at(i);
  }

  // 入力 (2重ループを用いる)
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> A.at(i).at(j);
    }
  }
  int ans=0;
  int cnt;
  for (int i = 0; i < N; i++) {
    cnt =C;
    for (int j = 0; j < M; j++) {
      cnt+=A.at(i).at(j)*B.at(j);
    }
    if(cnt>0){
      ans++;
    }
  }


   cout << ans << endl;

}