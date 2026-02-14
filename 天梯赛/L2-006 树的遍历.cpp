#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=35;
int a[N],b[N];
int n;
pair<int,int> tree[N];
int  build(int la,int ra,int lb,int rb){
    if(la>ra||lb>rb){
        return 0;
    }
    int root = a[ra];
    int p=lb;
    while(b[p]!=root){
        p++;
    }
    int cnt=p-lb;
    tree[root].first=build(
            la,la+cnt-1,
            lb,p-1
            );
    tree[root].second=build(
            la+cnt,ra-1,
            p+1,rb
            );
    return root;
}
void bfs(int root){
    queue<int> q;
    q.push(root);
    while(!q.empty()){
        auto t=q.front();
        q.pop();
        if(t!=root){
            cout<<' ';
        }
        cout<<t;
        if(tree[t].first){
            q.push(tree[t].first);
        }
        if(tree[t].second){
            q.push(tree[t].second);
        }
    }
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    int root=build(1,n,1,n);
    bfs(root);
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
