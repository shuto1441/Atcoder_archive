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
#define SET(value) set<int>value
#define SORT_G(a,N) sort(a,a+N,greater<int>())
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
  string S;
  cin>>S;
  int cnt_o=0;
  int cnt_e=0;
  int cnt_x=0;
  rep(i,S.size()){
    if(S[i]=='o') cnt_o++;
    else if(S[i]=='x') cnt_x++;
    else cnt_e++;
  }
  if(cnt_o>4) cout<<0<<endl;
  else if(cnt_o==4) cout<<24<<endl;
  else if(cnt_o==3) cout<<4*3*3+4*3*2*cnt_e<<endl;
  else if(cnt_o==2) cout<<8+6+24*cnt_e+12*cnt_e+24*cnt_e*(cnt_e-1)/2<<endl;
  else if(cnt_o==1) //cout<<1+cnt_e*4+6*cnt_e+6*cnt_e*(cnt_e-1)+4*cnt_e+6*cnt_e*(cnt_e-1)+4*cnt_e*(cnt_e-1)*(cnt_e-2)<<endl;
  //else cout<<cnt_e+5*cnt_e*(cnt_e-1)+12*3*cnt_e*(cnt_e-1)*(cnt_e-2)/6+cnt_e*(cnt_e-1)*(cnt_e-2)*(cnt_e-3)<<endl;
  	cout<<(cnt_e+1)*(cnt_e+1)*(cnt_e+1)*(cnt_e+1)-cnt_e*cnt_e*cnt_e*cnt_e<<endl;
  else cout<<cnt_e*cnt_e*cnt_e*cnt_e<<endl;
  
  return 0;
}
