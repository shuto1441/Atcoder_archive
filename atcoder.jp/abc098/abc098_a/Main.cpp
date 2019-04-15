#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a,b;
  cin >> a>>b;
  int max1 = max(max(a+b,a-b),max(a-b,a*b));
  
  cout<<max1<<endl;

}

