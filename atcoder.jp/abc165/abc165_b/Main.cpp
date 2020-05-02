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

int gcd(int a, int b) {
  int v0 = a, v1 = b, v2 = a % b;
  while (v2 != 0) {
    v0 = v1;
    v1 = v2;
    v2 = v0 % v1;
  };
  return v1;
}

int gcd3(int a, int b,int c){
  return gcd(gcd(a,b),c);
}

int mid(int a, int b, int c){
  if(max(max(a,b),c)==a && min(min(a,b),c)==b)
    return c;
  if(max(max(a,b),c)==a && min(min(a,b),c)==c)
    return b;
  if(max(max(a,b),c)==b && min(min(a,b),c)==a)
    return c;
  if(max(max(a,b),c)==b && min(min(a,b),c)==c)
    return a;
  if(max(max(a,b),c)==c && min(min(a,b),c)==a)
    return b;
  if(max(max(a,b),c)==c && min(min(a,b),c)==b)
    return a;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll X;
  cin>>X;
  int i=0;
  ll ans=100;
  while (ans < X) {
    ans*=1.01;
    i+=1;
  }
  cout<<i<<endl;

}
