#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B;
  string s;
  cin>>A>>B>>s;
  bool f=false;
  if(s.at(A)!='-')
    f = true;
  for(int i=0;i<A;i++){
      if(s.at(i)=='-'){
        f=true;
        break;
    }
  }
  for(int i=A+1;i<s.size();i++){
      if(s.at(i)=='-'){
        f=true;
        break;
    }
  }
  if(f)
    cout<<"No"<<endl;
  else
    cout<<"Yes"<<endl;    
}



