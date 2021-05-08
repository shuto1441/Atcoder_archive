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
  int N,A,B;
  cin>>N>>A>>B;
  int ans=0;
  int cnt;
  FOR(i,1,N+1){
    if(i==10000)
      cnt=1;
    else if(i>=1000)
      cnt=i/1000+(i/100)%10+i/10%10+i%10;
    else if(i>=100)
      cnt=(i/100)%10+i/10%10+i%10;
    else if(i>=10)
      cnt=i/10+i%10;
    else
      cnt=i;
    if(cnt>=A&&cnt<=B)
      ans+=i;
  }


  cout<<ans<<endl;
  
  return 0;
}
