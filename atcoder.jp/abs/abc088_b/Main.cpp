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

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N,a[N];
  cin>>N;
  rep(i,N) cin>>a[i];
  sort(a,a+N,greater<int>());
  int sum_b=0;
  int sum_a=0;
  rep(i,N){
    if(i%2==0)
      sum_a+=a[i];
    else
      sum_b+=a[i];
  }
  cout<<sum_a-sum_b<<endl;
  
  return 0;
}
