#include <bits/stdc++.h>
using namespace std;

int main(){
  int s;
  cin>>s;
  int a=s/100;
  int b=s-a*100;
  if(a>=1&&a<=12&&b<=12&&b>=1)
    cout<<"AMBIGUOUS"<<endl;
  else if(a>=1&&a<=12&&(b>12||b==0))
    cout<<"MMYY"<<endl;
  else if(b>=1&&b<=12&&(a>12||a==0))
    cout<<"YYMM"<<endl;
  else
    cout<<"NA"<<endl;
 }
    
  
  
