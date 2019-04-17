#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,X,Y;
  cin>>N>>M>>X>>Y;
  
  // 100要素の配列で初期化
  vector<int> x(N);
  vector<int>y(M);
  for(int i=0;i<N;i++)
    cin>>x.at(i);
  for(int i=0;i<M;i++)
    cin>>y.at(i);
  sort(x.begin(),x.end());
  sort(y.begin(),y.end());
  int ans=0;
  int tmp=X+1;
  for(int i=X;i<Y;i++){
    if(x.at(N-1)<tmp&&y.at(0)>=tmp){
      cout<<"No War"<<endl;
      ans=1;
      break;
    }
    tmp++;
  }
  if(ans==0)
    cout<<"War"<<endl;
}
  

