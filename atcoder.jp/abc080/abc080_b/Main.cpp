#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin >> n;
  int b =0;
  
  for(int i = n; i > 0; i/=10)
    b += i%10;
  
  if(n%b==0)
    cout << "Yes" << endl;
  else
    cout << "No" <<endl;
}
    

    
 
    
    