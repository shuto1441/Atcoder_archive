#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  // int型の2次元配列(3×4要素の)の宣言
  string s;
  cin>>s;
  int count1=0;
  int count2=0;
  // 入力 (2重ループを用いる)
  for (int i = 0; i < s.size(); i++) {
    if(i%2==0){
      if(s.at(i)=='0')
        count1++;
      else
        count2++;
    }
    else{
      if(s.at(i)=='0')
        count2++;
      else
        count1++;
    }
  }
  cout<<min(count1,count2)<<endl;   
    
  }