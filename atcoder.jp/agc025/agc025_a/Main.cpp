#include <iostream>
using namespace std;

// 各桁の和を計算する関数
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;
  int ans = 99999;
  for (int i = 1; i <= N-1; ++i) {
    int sum = findSumOfDigits(i)+findSumOfDigits(N-i); // i の各桁の和
    ans=min(ans,sum);
  }
  cout << ans << endl;
}
