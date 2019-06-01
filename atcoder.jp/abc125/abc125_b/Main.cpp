#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>a(n);
  vector<int>b(n);
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
    cin>>b[i];
  vector<int>c(n);
  int sum =0;
  for(int i=0;i<n;i++)
    c[i]=a[i]-b[i];
  sort(c.begin(),c.end());
  reverse(c.begin(),c.end());
  for(int i=0;i<n;i++){
    if(c[i]>0)
      sum+=c[i];
    else
      break;
  }
  cout<<sum<<endl;

}

