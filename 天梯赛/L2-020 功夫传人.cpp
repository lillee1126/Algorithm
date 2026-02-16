#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
const int N=1e5+10;
double z,r;
vector<int> e[N];
vector<int> d(N);
vector<double> p(N);
vector<pair<int,int>> v;
void bfs(){
    queue<int> q;
    q.push(0);
    d[0] = 0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        for(int nxt : e[cur]){
            d[nxt] = d[cur] + 1;
            q.push(nxt);
        }
    }
}
void solve(){
	cin>>n>>z>>r;
    double ans=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k==0){
            int t;
            cin>>t;
            v.push_back({i,t});
        }
        else{
            for(int j=0;j<k;j++){
                int t;
                cin>>t;
                e[i].push_back(t);
            }
        }
    }
    p[1]=(100-r)/100.0;
    p[0] = 1.0;
    bfs();
    for(int i=2;i<n;i++){
        p[i] = p[i-1] * p[1];
    }
    for(int i=0;i<v.size();i++){
        ans+=z*p[d[v[i].first]]*v[i].second;
    }
    cout<<(int)ans;
}

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
