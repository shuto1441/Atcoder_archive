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
ll a[55],n,k;
ll dfs(ll l,ll r){
    ll s;
	vector<ll> vec;
	for(int i=0;i<=l;i++) vec.push_back(a[i]);
	for(int i=r;i<n;i++) vec.push_back(a[i]);
	sort(vec.begin(),vec.end());
	ll maxs;
	maxs=k-vec.size();          
	if(maxs<0) return 0;
	s=0;
	for(int i=0;i<vec.size();i++){
		if(vec[i]<0&&maxs>0){
        	maxs--;
		}
		else{
			s+=vec[i];
		}
	}
	return s;
}




int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>n>>k;
  rep(i,n){
    cin>>a[i];
  }
  ll ans=0;
  for(int i=-1;i<n;i++){
		for(int j=i+1;j<=n;j++){
        	ans=max(ans,dfs(i,j));
		}
	}
	cout<<ans<<endl;
	return 0;
}
  
  
