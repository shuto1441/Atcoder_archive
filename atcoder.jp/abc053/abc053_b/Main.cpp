#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  int count1,count2 = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str.at(i) == 'A') {
      count1=i+1;
      break;
    }
  }
  for(int i=str.size()-1;i>0;i--){
    if(str.at(i)=='Z'){
      count2=i+1;
      break;
    }
  }
  cout<<count2-count1+1<<endl;
}
      


