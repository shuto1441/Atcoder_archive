#include <bits/stdc++.h>
using namespace std;

int main() {
    int W,H,N;
    cin >> W>>H>>N;
    vector<vector<int>> data(N, vector<int>(3));
 
  // 入力 (2重ループを用いる)
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < 3; j++) {
        cin >> data.at(i).at(j);
      }
    }
    int lx=0,hx=W,ly=0,hy=H;
    for(int i=0;i<N;i++){
      if(data[i][2]==1)
        lx=max(lx,data[i][0]);
      if(data[i][2]==2)
        hx=min(hx,data[i][0]);
      if(data[i][2]==3)
        ly=max(ly,data[i][1]);
      if(data[i][2]==4)
        hy=min(hy,data[i][1]);
    }
    if(hx-lx>=0&&hy-ly>=0)
       cout<<(hx-lx)*(hy-ly)<<endl;
    else
      cout<<0<<endl;
    
  
         
}
