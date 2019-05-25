#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int r,D,x;
  cin >> r>>D>>x;
  int tmp1=x;
  int tmp;
  
  for(int i=1;i<11;i++){
    tmp=tmp1;
    cout<<r*tmp-D<<endl;
    tmp1=r*tmp-D;
  }
}