#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
bool a[62][1288][130];
bool vis[62][1288][130];
int m,n,l;
int t;
int dx[6]={1,0,-1,0,0,0};
int dy[6]={0,1,0,-1,0,0};
int dz[6]={0,0,0,0,1,-1};
int ans=0;
struct node{
    int z,x,y;
};
void bfs(int z,int x,int y){
    int p=0;
    queue<node> q;
    q.push({z,x,y});
    while(!q.empty()){
        auto cur=q.front();
        q.pop();
        if(vis[cur.z][cur.x][cur.y])
            continue;
        vis[cur.z][cur.x][cur.y]=1;
        p++;
        for(int i=0;i<6;i++){
            int xx=cur.x+dx[i];
            int xy=cur.y+dy[i];
            int xz=cur.z+dz[i];
            if(xx>=1&&xx<=m&&xy>=1&&xy<=n&&xz<=l&&xz>=1&&!vis[xz][xx][xy]&&a[xz][xx][xy]){
                q.push({xz,xx,xy});
            }
        }
    }
    if(p>=t)
        ans+=p;
}
void solve(){
	cin>>m>>n>>l>>t;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=m;j++){
            for(int k=1;k<=n;k++){
                cin>>a[i][j][k];
            }
        }
    }
    for(int i=1;i<=l;i++){
        for(int j=1;j<=m;j++){
            for(int k=1;k<=n;k++){
                if(!vis[i][j][k]&&a[i][j][k]){
                    bfs(i,j,k);
                }
            }
        }
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
