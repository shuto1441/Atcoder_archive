#include <bits/stdc++.h>
using namespace std;
int ordinary(int x){
    return (x+9)/10*10;
}
int last(int x){
    return x;
}
int main() {
  int a,b,c,d,e;
  cin >> a>>b>>c>>d>>e;
  vector<int>vec={a,b,c,d,e};
  int min1=9999;
  int sum=0;
  for(int i=0;i<5;i++)
      sum+=ordinary(vec[i]);
  for(int i=0;i<5;i++){
    if(min1>=sum-ordinary(vec[i])+last(vec[i]))
      min1=sum-ordinary(vec[i])+last(vec[i]);
  }
  cout<<min1<<endl;

}
