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
  VECV(A,3,3);
  // int型の2次元配列(3×4要素の)の宣言
  vector<vector<bool>> C(3, vector<bool>(3));
  int N;
  // 入力 (2重ループを用いる)
  rep(i,3){
    rep(j,3) {
      cin >>A.at(i).at(j);
    }
  }
  cin>>N;
  VEC(b,N);
  rep(i,N){
    cin >>b.at(i);
  }

  rep(i,3){
    rep(j,3){
      C.at(i).at(j)=false;
    }
  }
  rep(i,3){
    rep(j,3){
      rep(k,N){
        if(b[k]==A[i][j])
      		C[i][j]=true;
      }
    }
  }
  string ans="No";

  if(C[0][0] && C[1][1] && C[2][2])
    ans="Yes";
  if(C[1][1] && C[1][2] && C[1][0])
    ans="Yes";
  if(C[2][1] && C[2][2] && C[2][0])
    ans="Yes";
  if(C[0][1] && C[0][2] && C[0][0])
    ans="Yes";
  if(C[1][1] && C[2][1] && C[0][1])
    ans="Yes";
  if(C[1][2] && C[2][2] && C[0][2])
    ans="Yes";
  if(C[1][0] && C[2][0] && C[0][0])
    ans="Yes";
  if(C[2][0] && C[1][1] && C[0][2])
    ans="Yes";
  cout<<ans<<endl;
  
}
