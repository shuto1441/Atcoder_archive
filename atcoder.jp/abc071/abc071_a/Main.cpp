#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int s,a,b;
  cin >>s>> a>>b;
  if(abs(s-a)>abs(s-b))
    cout<<'B'<<endl;
  else
    cout<<'A'<<endl;
}