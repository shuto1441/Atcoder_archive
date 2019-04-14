#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum =0;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
}
  for(int i = 0; i < N; i++){
    sum += vec.at(i);
}
  int avg = sum/N;
  for(int i = 0; i < N; i++){
    if(vec[i]>avg)
      cout<<vec[i]-avg<<endl;
    else
      cout<<avg-vec[i]<<endl;
  }
}
  
 