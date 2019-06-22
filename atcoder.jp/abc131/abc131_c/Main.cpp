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
bool f(string s){
  bool ans=true;
  rep(i,s.size()/2){
    if(s[i]!=s[s.size()/2+i]){
      ans=false;
      break;
    }
  }
  return ans;
}

ll g(ll C,ll D){
  ll X,tmp,r;
  X = C*D ;
 
  /* 自然数 a > b を確認・入替 */
  if(C<D){
    tmp = C;
    C = D;
    D = tmp;
  }
  ll c=C;
  ll d=D;
  /* ユークリッドの互除法 */
  r = C % D;
  while(r!=0){
    C = D;
    D = r;
    r = C % D;
  }
  
  ll lcm=X/D;
  return lcm;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll A,B,C,D;
  cin>>A>>B>>C>>D;
  ll ans=0;
  ll lcm =g(C,D);

  ll numb=B/C+B/D-B/lcm;
  ll numa=(A-1)/C+(A-1)/D-(A-1)/lcm;
  cout<<B-numb-A+numa+1<<endl;
}
