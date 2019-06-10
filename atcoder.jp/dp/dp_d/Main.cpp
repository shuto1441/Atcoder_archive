using namespace std;
#include <bits/stdc++.h>
#define rep(i, s) for (int i = 0; i < s; ++i)
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
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll N,W;
  cin>>N>>W;
  ll w[N],v[N];
  rep(i,N){
    cin>>w[i]>>v[i];
  }
  ll dp[N][W+1];
  rep(i,N){
    rep(j,W+1){
      dp[i][j]=-INF;
    }
  }
  dp[0][0]=0;
  dp[0][w[0]]=v[0];
  rep(i,N-1){
    rep(j,W+1){
       dp[i+1][j]=max(dp[i][j],dp[i+1][j]);
       if(j+w[i+1]<=W)
          dp[i+1][j+w[i+1]]=max(dp[i+1][j+w[i+1]],dp[i][j]+v[i+1]);
    }
  }
  ll ans=-INF;
  rep(i,W+1){
    ans=max(dp[N-1][i],ans);
  }
  cout<<ans<<endl;
  

}
  
