#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int> vec(N);
    for(int i=0;i<N;i++)
      cin>>vec.at(i);
    sort(vec.begin(), vec.end());
    int sum=0;
    for(int i=0;i<N-1;i++)
      sum+=vec.at(i);
    if(sum>vec.at(N-1))
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;


}
