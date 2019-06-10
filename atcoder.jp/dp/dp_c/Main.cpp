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
  int a[N],b[N],c[N];
  rep(i,N){
    cin>>a[i]>>b[i]>>c[i];
  }
  int dp[N][3];
  rep(i,N){
    rep(j,3){
      dp[i][j]=0;
    }
  }
  dp[0][0]=a[0];
  dp[0][1]=b[0];
  dp[0][2]=c[0];
  rep(i,N-1){
    dp[i+1][0]=max(dp[i][1]+a[i+1],dp[i][2]+a[i+1]);
    dp[i+1][1]=max(dp[i][0]+b[i+1],dp[i][2]+b[i+1]);
    dp[i+1][2]=max(dp[i][1]+c[i+1],dp[i][0]+c[i+1]);
  }
  cout<<max(dp[N-1][0],max(dp[N-1][1],dp[N-1][2]))<<endl;;
}
  
