#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e4+10;
vector<int> e[N];
int n,m;
bool vis[N];
bool flag(){
    for(int i=1;i<=n;i++){
        if(vis[i]){
            continue;
        }
        for(int j=0;j<e[i].size();j++){
            int t=e[i][j];
            if(!vis[t]){
                return 0;
            }
        }
    }
    return 1;
}
void solve(){
	cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        e[a].push_back(b);
        e[b].push_back(a);
    }
    int k;
    cin>>k;
    while(k--){
        memset(vis,0,sizeof vis);
        int t;
        cin>>t;
        for(int i=0;i<t;i++){
            int v;
            cin>>v;
            vis[v]=1;
        }
        if(flag()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
