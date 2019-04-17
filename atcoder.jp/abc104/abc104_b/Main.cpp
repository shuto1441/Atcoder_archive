#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string N;
  cin>>N;
  int count=0;
  int ans=0;
  if(N.at(0)!='A')
    ans=1;    
  for(int i=2;i<N.size()-1;i++){
    if(isupper(N.at(i))){
      if(N.at(i)=='C')
         count++;
      else
        ans=1;
    }
    if(ans==1)
       break;
  }
  if(count!=1)
    ans=1;
  if(isupper(N.at(N.size()-1))||isupper(N.at(1)))
    ans=1;
  if(ans==0)
    cout<<"AC"<<endl;
  else
    cout<<"WA"<<endl;
}
 
  
