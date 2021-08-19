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
    int X;
    cin>>X;
    int a=X/1000;
    int b=X/100-a*10;
    int c=X/10-a*100-b*10;
    int d=X%10;
    if(a==b && c==d && b==c){
        cout<<"Weak"<<endl;
    }
    else if((b-a==-9||b-a==1)&&(c-b==-9||c-b==1)&&(d-c==-9||d-c==1)){
        cout<<"Weak"<<endl;
    }
    else cout<<"Strong"<<endl;
    return 0;
}