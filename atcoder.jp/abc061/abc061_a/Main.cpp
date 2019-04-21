#include<bits/stdc++.h>
using namespace std;

int main(){
  int x,y,z;
  cin>>x>>y>>z;
  bool f=false;
  if(z>=x&&z<=y)
    f=true;
 
  if(f)
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
}
