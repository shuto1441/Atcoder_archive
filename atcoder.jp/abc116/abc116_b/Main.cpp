#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  cin>>s;
  vector<int>vec(10000);
  int tmp=s;
  vec.at(0)=s;
  for(int i=0;i<9999;i++){
    
    if(vec.at(i)==4||vec.at(i)==2||vec.at(i)==1){
      cout<<i+4<<endl;
      break;
    }
    tmp=vec.at(i);
    if(tmp%2==0)
      vec.at(i+1)=tmp/2;
    else
      vec.at(i+1)=3*tmp+1;

  }
}
