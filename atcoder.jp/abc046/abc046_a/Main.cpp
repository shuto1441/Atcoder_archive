#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int cnt=1;
  if(a!=b)
    cnt++;
  if(a!=c&&b!=c)
    cnt++;
  cout<<cnt<<endl;

}
