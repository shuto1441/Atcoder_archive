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
  int N;
  cin>>N;
  int h[N];
  rep(i,N){
    cin>>h[i];
  }
  int dp[N];
  rep(i,N){
    dp[i]=INF;
  }
  dp[0]=0;
  dp[1]=abs(h[1]-h[0]);
  rep(i,N-2){
    dp[i+2]=min(dp[i+1]+abs(h[i+2]-h[i+1]),dp[i]+abs(h[i+2]-h[i]));
  }
  cout<<dp[N-1]<<endl;;
}
