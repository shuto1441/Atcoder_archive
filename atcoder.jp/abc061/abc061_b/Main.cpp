#include <bits/stdc++.h>
using namespace std;

int main(){
    //入力部
    int N,M;
    cin>>N>>M;
    vector<int>a(M);
    vector<int>b(M);
    vector<int>c(N);
    for(int i = 0;i < M; i++){
        cin>>a.at(i)>>b.at(i);
    }
    //上下の文字列
    for(int i = 0;i < N; i++){
      for(int j=0;j < M; j++){
        if (i + 1== a[j]|| i+1==b[j])
          c[i]++;
      }
    }
    for(int i =0;i<N;i++)
      cout<<c.at(i)<<endl;

    }
