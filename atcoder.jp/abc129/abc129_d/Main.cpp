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
  int H,W;
  cin>>H>>W;
  vector<string>S(H);
  rep(i,H){
    cin>>S[i];
  }
  vector<vector<ll>> L(H, vector<ll>(W));
  vector<vector<ll>> R(H, vector<ll>(W));
  vector<vector<ll>> D(H, vector<ll>(W));
  vector<vector<ll>> U(H, vector<ll>(W));
  vector<vector<ll>> dp(H, vector<ll>(W));
  rep(i,H){
    rep(j,W){
      if(S[i][j]=='#')
        L[i][j]=0;
      else if(j==0)
        L[i][j]=1;
      else
        L[i][j]=L[i][j-1]+1;
      }
    }
  repr(i,H){
    repr(j,W){
        if(S[i][j]=='#')
          R[i][j]=0;
        else if(j==W-1)
          R[i][j]=1;
        else
          R[i][j]=R[i][j+1]+1;
        }
      }
  rep(i,H){
    rep(j,W){
          if(S[i][j]=='#')
            U[i][j]=0;
          else if(i==0)
            U[i][j]=1;
          else
            U[i][j]=U[i-1][j]+1;
          }
        }
  repr(i,H){
    rep(j,W){
                if(S[i][j]=='#')
                  D[i][j]=0;
                else if(i==H-1)
                  D[i][j]=1;
                else
                  D[i][j]=D[i+1][j]+1;
                }
              }
  ll ans=0;
  rep(i,H){
    rep(j,W){
      dp[i][j]=L[i][j]+R[i][j]+U[i][j]+D[i][j]-3;
      ans=max(dp[i][j],ans);
      
    }
  }

  
  cout<<ans<<endl;


}
