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
    string S[4];
    bool check[4];
    rep(i,4){
        cin>>S[i];
        check[i]=false;
    }
    rep(i,4){
        if(S[i]=="H"){
            check[0]=true;
        }
        else if(S[i]=="2B"){
            check[1]=true;
        }
        if(S[i]=="3B"){
            check[2]=true;
        }
        if(S[i]=="HR"){
            check[3]=true;
        }
        
    }
    string ans="Yes";
    rep(i,4){
        if(!check[i]){
            ans="No";
        }
    }


    cout<<ans<<endl;
    return 0;
}