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
  int N;
  string S;
  cin>>N>>S;
  int ans=0;
  FOR(i,1,N){
    int cnt=0;
    for(char s='a';s<='z';s++){
      bool left =false,right=false;
      rep(j,i){
        if(S[j]==s)
          left=true;
      }
      FOR(j,i,N){
        if(S[j]==s)
          right=true;
      }
      if(right&&left)
        cnt++;
    } 
    ans=max(cnt,ans);
  }
  cout<<ans<<endl;
    
    
}
  

