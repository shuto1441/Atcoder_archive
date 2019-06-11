using namespace std;
#include <bits/stdc++.h>
#define rep(i, s) for (int i = 0; i < s; ++i)
#define repr(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define all(v) (v.begin(), v.end())
#define EACH(i, s) for (__typeof__((s).begin()) i = (s).begin(); i != (s).end(); ++i)
#define VEC(a, n) vector<int>a(n)
#define PQ(a) priority_queue<int>a
#define PQmin(a) priority_queue< int, :vector<int>, greater<int> >a
#define PAIR pair<int, int>
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e10)
#define PI (acos(-1))
const ll mod = 1000000007;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int A,B;
  cin>>A>>B;
  int c;
  if(B==100)
    c=A*1000+B;
  else if(B>9)
    c=A*100+B;
  else
    c=A*10+B;
  int d=1;
  while(c>=d*d){
    if(c==d*d){
      cout<<"Yes"<<endl;
      return 0;
    }
    else
      d++;
  }
  cout<<"No"<<endl;
    
    

 
}
  



