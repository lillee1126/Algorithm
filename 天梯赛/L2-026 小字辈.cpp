#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 1e5 + 10;
int n;
int fa[N];
int depth[N];  

int get_depth(int x){
    if(x == -1) return 0;
    if(depth[x]) return depth[x];  
    return depth[x] = get_depth(fa[x]) + 1;
}

void solve(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> fa[i];
    }

    int mx = 0;

    for(int i = 1; i <= n; i++){
        depth[i] = get_depth(i);
        mx = max(mx, depth[i]);
    }

    cout << mx << endl;

    bool first = true;
    for(int i = 1; i <= n; i++){
        if(depth[i] == mx){
            if(!first) cout << ' ';
            cout << i;
            first = false;
        }
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
