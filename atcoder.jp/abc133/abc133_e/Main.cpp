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
const int mod=1000000007,MAX=100001;


vector<int> S[MAX];
vector<ll> dis(MAX);
ll ans,K;


ll BFS(){
    queue<int> Q;
    ll ans=1;
    Q.push(0);
    dis[0]=0;
    ans*=K;
    while(!Q.empty()){
        int a=Q.front();
        Q.pop();
        int cnt=0;
        for(int i=0;i<S[a].size();i++){
            int b=S[a][i];
            if(dis[b]==-1){
                if(dis[a]==0){
                    ans*=(K-1-cnt);
                    ans=ans%mod;
                    cnt++;
                    dis[b]=1;
                }else{
                    ans*=(K-2-cnt);
                    ans=ans%mod;
                    cnt++;
                    dis[b]=dis[a]+1;
                }
                Q.push(b);
            }
        }
    }
    
    return ans;
}

int main(){
    
    int N;cin>>N>>K;
    for(int i=0;i<N-1;i++){
        int a,b;cin>>a>>b;
        a--;b--;
        S[a].push_back(b);
        S[b].push_back(a);
    }
    for(int i=0;i<N;i++){
        dis[i]=-1;
    }
    
    cout<<BFS()<<endl;
}

