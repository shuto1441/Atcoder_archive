#include <bits/stdc++.h>
#include<algorithm>
#include<complex>
#include<ctype.h>
#include<iomanip>
#include<iostream>
#include<map>
#include<math.h>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<stdio.h>
#include<string>
#include<string>
#include<vector>
using namespace std;

bool compare_by_b(pair<string, int> a, pair<string, int> b) {
    if(a.first == b.first){
        return a.second > b.second;
    }else{
        return a.first < b.first;
    }
}
int main(){
  int N;
  cin>>N;
  vector<pair<string, int> > pairs(N);
  vector<pair<string, int> > copy(N);
  for(int i=0;i<N;i++){
        string a;
        int b;
        cin >> a >> b;
        pairs[i] = make_pair(a, b);
        copy[i] = make_pair(a,b);
    }
  sort(pairs.begin(),pairs.end(), compare_by_b);
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(pairs[i]==copy[j]){
        cout<<j+1<<endl;
        break;
      }
    }
  }
}

