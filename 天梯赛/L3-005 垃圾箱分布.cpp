#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,k,dism;
const int N=1e3+20;
vector<pair<int,int>> e[N];
bool vis[N];
int dis[N];
int get_id(string s){
    if(s[0] == 'G'){
        int num = stoi(s.substr(1));
        return n + num;
    }else{
        return stoi(s);
    }
}
struct place{
    int id;double per;int min;
};
struct node{
    int dis;
    int pos;
    bool operator>(const node&x)const {
        return dis > x.dis;
    }
};
vector<place> ans;
void dij(int s){
    dis[s]=0;
    priority_queue<node, vector<node>, greater<node>> q;
    q.push({0,s});
    int dmi=INT_MAX;
    int dmx=0;
    while(!q.empty()){
        auto t=q.top();
        q.pop();
        int cur=t.pos;
        int d=t.dis;
        if(vis[cur]){
            continue;
        }
        vis[cur]=1;
        for(int i=0;i<e[cur].size();i++){
            int to=e[cur][i].first;
            int dt=e[cur][i].second;
            if(dis[to]>dt+d){
                dis[to]=dt+d;
                if(!vis[to]){
                    q.push({dis[to],to});
                }
            }
        }
    }
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=dis[i];
        dmx=max(dmx,dis[i]);
        dmi=min(dmi,dis[i]);
    }
    if(dmx<=dism){
        ans.push_back({s,sum/(double)n,dmi});
    }
}
bool f(place a, place b){
    if(a.min != b.min)
        return a.min > b.min;

    if(fabs(a.per - b.per) > 1e-8)
        return a.per < b.per;

    return a.id < b.id;
}
void solve(){
	cin>>n>>m>>k>>dism;
    for(int i=1;i<=k;i++){
        string a,b;
        int c;
        cin>>a>>b>>c;
        int u = get_id(a);
        int v = get_id(b);
        e[u].push_back({v, c});
        e[v].push_back({u, c});
    }
    for(int i=n+1;i<=n+m;i++){
        for(int j=1;j<=n+m;j++){
            dis[j]=INT_MAX;
        }
        memset(vis,0,sizeof vis);
        dij(i);
    }
    if(ans.empty()){
        cout<<"No Solution";
        return;
    }
    sort(ans.begin(),ans.end(),f);
    printf("G%lld\n%.1lf %.1lf",ans[0].id-n,(double)ans[0].min,ans[0].per);
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
