#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n;

    int best_k = -1, best_m = -1;

    int k_max = log2(n) + 1;

    for(int k = 1; k <= k_max; k++){
        int t = 0;
        for(int i = 1; ; i++){
            t += (int)pow(i, k);

            if(t == n){
                if(k > best_k){
                    best_k = k;
                    best_m = i;
                }
                break;
            }
            if(t > n){
                break;
            }
        }
    }

    if(best_k == -1){
        cout << "Impossible for " << n << '.';
    }else{
        for(int i = 1; i <= best_m; i++){
            cout << i << "^" << best_k;
            if(i != best_m) cout << "+";
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
