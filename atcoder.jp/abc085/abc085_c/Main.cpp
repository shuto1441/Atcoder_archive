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
  int N;
  ll Y;
  cin>>N>>Y;
  rep(i,N+1){
  	rep(j,N-i+1){
    	if(10000*i+5000*j+1000*(N-i-j)==Y){
        	cout<<i<<" "<<j<<" "<<N-i-j<<endl;
            return 0;
        }
    }
  }
  cout<<-1<<" "<<-1<<" "<<-1<<endl;
}
