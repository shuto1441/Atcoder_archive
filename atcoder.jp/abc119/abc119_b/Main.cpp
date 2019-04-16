#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  vector<double>a(N);
  vector<string>b(N);
  for(int i=0;i<N;i++)
    cin>>a.at(i)>>b.at(i);
  double sum=0;
  for(int i=0;i<N;i++){
    if(b.at(i)=="JPY")
      sum+=a.at(i);
    else
      sum+=a.at(i)*380000;
  }
  cout<<sum<<endl;
 
}
  
