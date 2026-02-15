#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1000;
int a[N],b[N];
int n;
pair<int,int> tree[N];
int build(int la,int ra,int lb,int rb){
    if(la>ra||lb>rb){
        return 0;
    }
    int root =b[lb];
    int p=la;
    while(a[p]!=root){
        p++;
    }
    int cnt=p-la;
    tree[root].first=build(p+1,ra,lb+cnt+1,rb);
    tree[root].second=build(la,p-1,lb+1,lb+cnt);
    return root;
}
void bfs(int root){
    queue<int> q;
    q.push(root);
    while(!q.empty()){
        int t=q.front();
        if(t!=root){
            cout<<' ';
        }
        cout<<t;
        if(tree[t].first) {
            q.push(tree[t].first);
        }
        if(tree[t].second){
            q.push(tree[t].second);
        }
        q.pop();
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
