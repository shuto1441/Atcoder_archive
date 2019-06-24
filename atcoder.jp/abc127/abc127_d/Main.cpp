using namespace std;
#include <bits/stdc++.h>
#define rep(i, s) for (int i = 0; i < s; ++i)
#define repr(i, n) for(int i = n-1; i >= 0; i--)
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



int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,M;
  cin>>N>>M;
  vector<l_l> pairs(M);
  vector<ll>A(N);
  rep(i,N) cin>>A[i];
  sort all(A);
  rep(i,M){
        ll a;
        ll b;
        cin >> a >> b;
        pairs[i] = make_pair(b, a);
    }
  sort all(pairs);
  vector<ll>D(N);
  int cnt=0;
  repr(i,M){
    rep(j,pairs[i].second){
      if(cnt==N)
        break;
      else{
        D.push_back(pairs[i].first);
        cnt++;
      }
    }
    if(cnt==N)
      break;
  }
  ll ans=0;
  sort all(D);
  reverse all(D);
  rep(i,N){
    ans+=max(A[i],D[i]);
  }
  cout<<ans<<endl;
  
  
}
  
  
