#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int sum = 0;
    cin >> N;  
    vector<int> vec(N);
    for(int i = 0;i < N;i++)
      cin >> vec[i];
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    for(int i = 0;i < N;i++){
      if(i%2==1)
        sum -= vec[i];
      else if(i==0)
        sum += vec[i];
      else
        sum += vec[i];
    }
    cout << sum << endl;
}

