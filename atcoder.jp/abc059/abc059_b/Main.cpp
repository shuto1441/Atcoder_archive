#include <iostream>
using namespace std;

int main(void){
  string a, b;
  cin >> a >> b;

  if(a.size() > b.size()){
    cout << "GREATER" << endl;
    return 0;
  } else if(a.size() < b.size()){
    cout << "LESS" << endl;
    return 0;
  }

  // When a and b has same digit
  int i = 0;
  while(true){
    if(a[i] == '\0' && b[i] == '\0'){
      cout << "EQUAL" << endl;
      return 0;
    }
    if(a[i] > b[i]){
      cout << "GREATER" << endl;
      return 0;
    } else if(a[i] < b[i]){
      cout << "LESS" << endl;
      return 0;
    }
    i++;
  }
  return 0;
}
