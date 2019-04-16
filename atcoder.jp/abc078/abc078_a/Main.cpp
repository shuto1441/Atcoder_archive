#include <bits/stdc++.h>
using namespace std;
int ans(char x){
  int ans;
  if(x=='A')
    ans=10;
  else if(x=='B')
    ans=11;
  else if(x=='C')
    ans=12;
  else if(x=='D')
    ans=13;
  else if(x=='E')
    ans=14;
  else
    ans=15;
  
  return ans;
}
int main() {
  char a,b;
  cin >> a>>b;
  int x,y;
  x=ans(a);
  y=ans(b);
  if(x>y)
    cout<<'>'<<endl;
  else if(x<y)
    cout<<'<'<<endl;
  else
    cout<<'='<<endl;
  
  

}

