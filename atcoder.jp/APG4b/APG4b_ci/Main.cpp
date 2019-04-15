#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int max1 = max(A,B);
  int max2 = max(B,C);
  int max3 = max(max1,max2);
  int min1 = min(A,B);
  int min2 = min(C,B);
  int min3 = min(min1,min2);
  
  cout << max3 - min3 <<endl;
}
