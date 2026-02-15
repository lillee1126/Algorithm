#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=510;
vector<int> e[N];
int n,m,k;
int vis[N];
int vis2[N];
void dfs(int t){
    vis[t]=1;
    for(int i=0;i<e[t].size();i++){
        if(!vis[e[t][i]]&&!vis2[e[t][i]])
            dfs(e[t][i]);
    }
}
int init(){
    memset(vis,0,sizeof(vis));
    int cnt=0;
    for(int i=0;i<n;i++){
        if(!vis[i]&&!vis2[i]){
            dfs(i);
            cnt++;
        }
    }
    return cnt;
}
void solve(){
	cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    cin>>k;
    int pre=init();
    for(int i=0;i<k;i++){
        int t;
        cin>>t;
        vis2[t]=1;
        int cur=init();
        if(cur>pre){
            cout << "Red Alert: City " << t << " is lost!" << endl;
        }
        else{
            cout << "City " << t << " is lost." << endl;
        }
        pre=cur;
    }
    if(k==n){
        cout<<"Game Over.";
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
