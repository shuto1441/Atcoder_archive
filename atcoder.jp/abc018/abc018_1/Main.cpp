#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int>A(3);
  vector<int>B(3);
  for(int i=0;i<3;i++){
    cin>>A[i];
    B[i]=A[i];
  }
  sort(A.begin(),A.end());
  for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(B[i]==A[j])
          cout<<3-j<<endl;
      }
  }
  
}

      



