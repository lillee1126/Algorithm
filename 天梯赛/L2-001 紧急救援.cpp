#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,s,d;
const int N=510;
vector<pair<int,int>> e[N];
int a[N];
int vis[N];
int dis[N];
int ans[N];
int cnt[N];
int pre[N];
void dij(){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0, s});
    while(!q.empty()){
        int x = q.top().second;
        q.pop();
        if(vis[x]) continue;
        vis[x] = 1;
        for(auto now : e[x]){
            if(dis[now.first] > dis[x] + now.second){
                ans[now.first]=ans[x]+a[now.first];
                cnt[now.first]=cnt[x];
                dis[now.first] = dis[x] + now.second;
                pre[now.first]=x;
                q.push({dis[now.first], now.first});
            }
            else if(dis[now.first] == dis[x] + now.second){
                cnt[now.first]+=cnt[x];
                if(ans[now.first] < ans[x] + a[now.first]){
                    ans[now.first] = ans[x] + a[now.first];
                    pre[now.first] = x;
                }
            }
        }
    }
}
void solve(){
    cin>>n>>m>>s>>d;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        int f,t,w;
        cin>>f>>t>>w;
        e[f].push_back({t,w});
        e[t].push_back({f,w});
    }
    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }
    dis[s]=0;
    cnt[s]=1;
    ans[s]=a[s];
    dij();
    cout<<cnt[d]<<' '<<ans[d]<<endl;
    vector<int> p;
    for(int i=d;i!=s;i=pre[i]){
        p.push_back(i);
    }
    p.push_back(s);
    reverse(p.begin(),p.end());
    for(int i=0;i<p.size();i++){
        if(i){
            cout<<' ';
        }
        cout<<p[i];
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
