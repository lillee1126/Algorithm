#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=3e5+10;
int head[N];
struct edge{
    int next,to,w;
};
edge e[2*N];
int n,m;
bool vis[N];
int cnt=0;
void add(int from,int to,int w){
    ++cnt;
    e[cnt].next=head[from];
    e[cnt].to=to;
    e[cnt].w=w;
    head[from]=cnt;
}
int dis[N];
struct node{
    int dis;
    int pos;
    bool operator>(const node&x)const {
        return dis > x.dis;
    }
};
priority_queue<node, vector<node>, greater<node>> p;
/*
struct node {
    int dis;
    int pos;
    bool operator<(const node& x) const {  // 默认用 < 比较
        return dis < x.dis;  // 大根堆
    }
};
priority_queue<node> q;  // 默认是大根堆
*/
 void dij(){
    p.push({0,1});
    while(!p.empty()){
        auto q=p.top();
        p.pop();
        int x=q.pos;
        if(vis[x])
            continue;
        vis[x]=1;
        for(int i=head[x];i;i=e[i].next){
            int y=e[i].to;
            if(dis[y]>dis[x]+e[i].w){
                dis[y]=dis[x]+e[i].w;
                if(!vis[y]){
                    p.push({dis[y],y});
                }
            }
        }
    }
}
void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int f,t,w;
        cin>>f>>t>>w;
        add(f,t,w);
    }
    for(int i=1;i<=n;i++){
        dis[i]=LONG_LONG_MAX;
    }
    dis[1]=0;
    dij();
    for(int i=1;i<=n;i++){
        if(dis[i]==LONG_LONG_MAX){
            cout<<-1<<' ';
        }
        else{
            cout<<dis[i]<<' ';
        }
    }
}
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    solve();
    return 0;
}