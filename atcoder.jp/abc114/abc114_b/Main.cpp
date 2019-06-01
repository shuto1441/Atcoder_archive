#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  vector<int>ans(s.size()-2);
  int sum;
  for(int i=0;i<s.size()-2;i++){
    sum=(s.at(i)-'0')*100+(s.at(i+1)-'0')*10+(s.at(i+2)-'0');
    ans[i]=abs(sum-753);
  }
  sort(ans.begin(),ans.end());
  
  cout<<ans[0]<<endl;

}

