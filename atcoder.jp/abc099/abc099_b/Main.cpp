#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  cin>>N>>M;
  int sum=0;
  for(int i=1;i<M-N;i++)
    sum+=i;
  cout<<sum-N<<endl;
    
    
}

