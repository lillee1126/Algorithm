#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m;
struct edge{
    int from,to,w;
};
const int N=1e5+10;
edge e[3*N];
int cnt=0;
bool f(const edge& aa,const edge& bb){
    return aa.w<bb.w;
}
void add(int from,int to,int w){
    ++cnt;
    e[cnt].w=w;
    e[cnt].to=to;
    e[cnt].from=from;
}
int fa[N];
int find(int x) {
    if (x != fa[x])
        fa[x] = find(fa[x]);
    return fa[x];
}
void merge(int a,int b){
    fa[find(a)]=find(b);
}
int ans=0;
void kruslal(){
    int num=0;
    for(int i = 1;i <= cnt;i++){
        int a=e[i].from,b=e[i].to;
        if(find(a)==find(b)){
            continue;
        }
        else{
            ans+=e[i].w;
            merge(a,b);
            num++;
        }
        if(num==n-1){
            cout<<ans;
            return;
        }
    }
    cout<<-1;
}
void solve(){
    cin>>n>>m;
    if(n==1&&m==0){
        cout<<0;
        return ;
    }
    for(int i=1;i<=n;i++){
        fa[i]=i;
    }
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        add(a,b,c);
    }
    sort(e+1,e+1+cnt,f);
    kruslal();
}
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    solve();
    return 0;
}