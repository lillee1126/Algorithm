#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m;
const int N=1e4+10;
vector<int> e[N];
bool vis[N];
int ans=0;
void dfs(int s,int cur,int step){
    if(step==3){
        ans++;
        return;
    }
    if(vis[cur]){
        return;
    }
    vis[cur]=1;
    for(int i=0;i<e[cur].size();i++){
        if(!vis[e[cur][i]])
            dfs(s,e[cur][i],step+1);
        else if(step==2&&e[cur][i]==s){
            dfs(s,e[cur][i],step+1);
        }
    }
    vis[cur]=0;
}
void solve(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) vis[j]=0;
        dfs(i,i,0);
    }
    cout<<ans;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
