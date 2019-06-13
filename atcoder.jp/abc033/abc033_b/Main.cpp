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
typedef pair<string, int>s_i;
typedef pair<int, string>i_s;
#define EPS (1e-7)
#define INF (1e10)
#define PI (acos(-1))
const ll mod = 1000000007;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N;
  cin>>N;
  vector<i_s>pairs(N);
  int sum=0;
  for(int i=0;i<N;i++){
        string a;
        int b;
        cin >> a >> b;
        sum+=b;
        pairs[i] = make_pair(b, a);
    }
  sort(pairs.begin(),pairs.end());
  if(pairs[N-1].first>=(sum+2)/2)
    cout<<pairs[N-1].second<<endl;
  else
    cout<<"atcoder"<<endl;


}






