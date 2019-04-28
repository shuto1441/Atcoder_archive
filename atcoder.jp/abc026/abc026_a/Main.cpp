#include<bits/stdc++.h>
using namespace std;

int main(){
  int a;
  cin>>a;
  
  if(a%2==0)
    cout<<a*a/4<<endl;
  else
    cout<<a/2*(a/2+1)<<endl;

}

