#include<bits/stdc++.h>
using namespace std;

int main(){
  int x,y;
  cin>>x>>y;
  vector<int>A={1,3,5,7,8,10,12};
  vector<int>B={4,6,9,11};
  bool f=false;
  
  for(int i=0;i<5;i++){
      for(int j=i+1;j<6;j++){
        if(A[i]==x&&A[j]==y)
          f=true;
      }
  }
  for(int i=0;i<3;i++){
      for(int j=i+1;j<4;j++){
        if(B[i]==x&&B[j]==y)
          f=true;
      }
  }
  if(f)
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
}
