#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N=2e5+10;
int w[N];
struct Tree{ //线段树
    int l,r,val;
}tr[N*4];

void build(int u,int l,int r){ //建树
    tr[u]={l,r,w[l]};
    if(l==r) return;
    int m=(l+r)/2;
    build(2*u,l,m);
    build(2*u+1,m+1,r);
    tr[u].val=max(tr[2*u].val,tr[2*u+1].val);
}
void update(int u,int a,int b){
    tr[u].val=max(tr[u].val,b);
    if(tr[u].l==a&&tr[u].r==a){
        return;
    }
    int m=(tr[u].l+tr[u].r)/2;
    if(a<=m){
        update(2*u,a,b);
    }
    else{
        update(2*u+1,a,b);
    }
}
int query(int u,int l,int r){ //区查
    if(l<=tr[u].l && tr[u].r<=r)
        return tr[u].val;
    int m=(tr[u].l+tr[u].r)/2;
    int v1=0,v2=0;
    if(l<=m) v1=query(2*u,l,r);
    if(r>m) v2=query(2*u+1,l,r);
    return max(v1,v2);
}

void solve(){
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> w[i];

    build(1, 1, n);
    while (m--) {
        char q;
        cin>>q;
        cin >> x >> y;
        if(q=='Q')
            cout<<query(1, x, y)<<endl;
        else
            update(1,x,y);
    }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}