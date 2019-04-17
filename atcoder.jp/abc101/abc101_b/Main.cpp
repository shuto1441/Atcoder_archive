#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  int sum=0;
  int tmp=N;
  int tmp1;
  while(tmp!=0){
    tmp1=tmp;
    sum+=tmp%10;
    tmp=tmp1/10;
  }
  if(N%sum==0)
     cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;
      
}
 
  
