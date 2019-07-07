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
const ll mod = 2019;
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
  cin>>N;
  vector<ll>A(N);
  vector<ll>M(N);
  rep(i,N){
    cin>>A[i];
  }
  M[0]=0;
  for(int i=0;i<N-2;i+=2){
    M[i+2]=M[i]+(A[i+1]-A[i])*2;
  }
  M[1]=M[N-1]+(A[0]-A[N-1])*2;
  for(int i=1;i<N-2;i+=2){
    M[i+2]=M[i]+(A[i+1]-A[i])*2;
  }
  ll Msum=0,Asum=0;
  for(int i=0;i<N;i++){
    Msum+=M[i];
    Asum+=A[i];
  }
  ll ans =(Asum-Msum)/N;
  for(int i=0;i<N;i++){
    cout<<M[i]+ans<<" ";
  }
  cout<<endl;
  
  
  
}