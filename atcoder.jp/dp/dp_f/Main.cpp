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
  string s,t;
  cin>>s>>t;
  int dp[s.size()+1][t.size()+1];
  rep(i,s.size()+1){
    rep(j,t.size()+1){
      dp[i][j]=0;
    }
  }
  string res;
  int n=s.size();
  int m=t.size();
  FOR(i,1,n+1){
    FOR(j,1,m+1){
      if (  s[i-1] == t[j-1] ){
        dp[i][j] = dp[i-1][j-1] + 1;
      }else{
        dp[i][j] = max( dp[i][j-1] , dp[i-1][j] );
      }
    }
  }
  int x=n,y=m;
  int ndp = dp[x][y];
  while( x > 0 & y > 0 ){
   if ( ndp-1 == dp[x-1][y-1] && s[x-1]==t[y-1] ){
      x-=1; 
      y-=1; 
      ndp-=1;
      res = s[x] + res;
   }
   else if(ndp == dp[x-1][y]){
     x-=1;
   }
   else{
     y-=1;
    }
  }
  cout<<res<<endl;
}
  
