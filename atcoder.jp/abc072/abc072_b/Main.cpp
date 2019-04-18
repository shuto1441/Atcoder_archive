#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  for (int i = 0; i < str.size(); i+=2) 
    cout << str.at(i);
  cout<<endl;
}
