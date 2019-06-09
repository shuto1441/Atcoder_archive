#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int S,T,U;
  cin>>S>>T>>U;
  cout<<min(S+T,min(S+U,T+U))<<endl;
}