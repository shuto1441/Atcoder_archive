#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b,c,d,e,f;
  cin >> a>>b>>c;
  if(a-b>=0)
    d=a-b;
  else
    d=b-a;
  if(a-c>=0)
    e=a-c;
  else
    e=c-a;
  if(b-c>=0)
    f=b-c;
  else
    f=c-b;
  int max1=max(max(d,e),max(e,f));
  cout<<d+e+f-max1<<endl;

}

