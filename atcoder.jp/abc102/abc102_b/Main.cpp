#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  vector<int>A(N);
  for(int i=0;i<N;i++)
    cin>>A[i];
  int max1=0;
  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++)
      max1=max(max1,abs(A[i]-A[j]));
  }
  cout<<max1<<endl;
      
}
 
  
