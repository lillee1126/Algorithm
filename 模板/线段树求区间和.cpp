#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N=1e5+10;
int w[N];
struct Tree{ //线段树
    int l,r,sum,add;
}tr[N*4];

void pushup(int u){ //上传
    tr[u].sum=tr[2*u].sum+tr[2*u+1].sum;
}
void pushdown(int u){ //下传
    if(tr[u].add){
        tr[2*u].sum+=tr[u].add*(tr[2*u].r-tr[2*u].l+1),
        tr[2*u+1].sum+=tr[u].add*(tr[2*u+1].r-tr[2*u+1].l+1),
        tr[2*u].add+=tr[u].add,
        tr[2*u+1].add+=tr[u].add,
        tr[u].add=0;
    }
}
void build(int u,int l,int r){ //建树
    tr[u]={l,r,w[l],0};
    if(l==r) return;
    int m=(l+r)/2;
    build(2*u,l,m);
    build(2*u+1,m+1,r);
    pushup(u);
}
void change(int u,int l,int r,int k){ //区修
    if(l<=tr[u].l&&tr[u].r<=r){
        tr[u].sum+=(tr[u].r-tr[u].l+1)*k;
        tr[u].add+=k;
        return;
    }
    int m=(tr[u].l+tr[u].r)/2;
    pushdown(u);
    if(l<=m) change(2*u,l,r,k);
    if(r>m) change(2*u+1,l,r,k);
    pushup(u);
}
int query(int u,int l,int r){ //区查
    if(l<=tr[u].l && tr[u].r<=r)
        return tr[u].sum;
    int m=(tr[u].l+tr[u].r)/2;
    pushdown(u);
    int sum=0;
    if(l<=m) sum+=query(2*u,l,r);
    if(r>m) sum+=query(2*u+1,l,r);
    return sum;
}
void solve(){
    int n, m, op, x, y, k;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> w[i];

    build(1, 1, n);
    while (m--) {
        cin >> op >> x >> y;
        if (op == 2)
            cout << query(1, x, y) << endl;
        else {
            cin >> k;
            change(1, x, y, k);
        }
    }

}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}