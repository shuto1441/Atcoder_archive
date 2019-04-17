#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  
  // 100要素の配列で初期化
  vector<string> x(N);
  int ans=0;
  for(int i=0;i<N;i++)
    cin>>x.at(i);
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
      if(x.at(i)==x.at(j)){
        ans=1;
        break;
      }
    if(ans==1)
        break;
    }
  }
  string tmp=x[0];
  for(int i=1;i<N;i++){
      if(x[i].at(0)!=tmp.at(tmp.size()-1)){
        ans=1;
        break;
      }
      tmp=x.at(i);
  }
  if(ans==1)
    cout<<"No"<<endl;
  else
    cout<<"Yes"<<endl;
}
    
        
      
  

