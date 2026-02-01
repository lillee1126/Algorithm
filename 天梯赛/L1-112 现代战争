#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 1e3 + 10;
int a[N][N];
int n, m, k;

void solve() {
    cin >> n >> m >> k;

    priority_queue<pair<int, pair<int, int>>> q;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            q.push({a[i][j], {i, j}});
        }
    }
    set<int> cl,row;
    for(int i=0;i<k;i++){
        int flag=1;
        auto t = q.top();
        while(flag) {
            t = q.top();
            q.pop();
            if (row.count(t.second.first)) {
                continue;
            }
            if (cl.count(t.second.second)) {
                continue;
            }
            flag=0;
        }
        row.insert(t.second.first);
        cl.insert(t.second.second);
    }
    int id=m;
    for(int i=m;i>=1;i--){
        if(cl.count(i)!=1){
            id=i;
            break;
        }
    }
    for(int i=1;i<=n;i++){
        if(row.count(i)!=1){
            for(int j=1;j<=m;j++){
                if(j==id){
                    cout<<a[i][j];
                }
                else if(cl.count(j)!=1){
                    cout<<a[i][j]<<' ';
                }
            }
            cout<<endl;
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
