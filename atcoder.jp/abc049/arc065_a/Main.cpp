using namespace std;
#include <bits/stdc++.h>
#define rep(i, s) for (int i = 0; i < s; ++i)
#define repr(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define all(v) (v.begin(), v.end())
#define EACH(i, s) for (__typeof__((s).begin()) i = (s).begin(); i != (s).end(); ++i)
#define VEC(a, n) vector<int>a(n)
#define VECV(a,n,m) vector<vector<int>> a(n, vector<int>(m));
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
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin>>s;
  string divide[4] = {"dream", "dreamer", "erase", "eraser"};
  reverse(s.begin(),s.end());
  rep(i,4) reverse(divide[i].begin(),divide[i].end());
  bool f,f2;
  f2=true;
  for(int i=0;i<s.size();){
    f=false;

    rep(j,4){
      if(s.substr(i,divide[j].size())==divide[j]){

        i+=divide[j].size();
        f=true;
      }
    }
    if(!f){
      f2=false;
      break;
    }
  }
  if(f2) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}