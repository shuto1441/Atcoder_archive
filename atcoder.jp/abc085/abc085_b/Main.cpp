#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int ans;
    cin >> N;  
    vector<int> vec(N);
    for(int i = 0;i < N;i++)
      cin >> vec[i];
    sort(vec.begin(), vec.end());
    int tmp = vec[0];
    for(int i = 0;i < N-1;i++){
       if(tmp != vec[i+1])
         ans++;
       tmp=vec[i+1];       
    }
    cout << ans+1 << endl;
}


