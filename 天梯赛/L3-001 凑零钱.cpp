#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m;
const int N=1e4+10;
int a[N];
bool dp[N][101];
void solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 0; i <= n+1; i++) {
        dp[i][0] = 1;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j <= m; j++) {
            dp[i][j] = dp[i + 1][j];
            if (j >= a[i] && dp[i + 1][j - a[i]]) {
                dp[i][j] = 1;
            }
        }
    }
    if (!dp[1][m]) {
        cout << "No Solution";
        return;
    }
    int rest = m;
    vector<int> ans;
    for (int i = 1; i <= n && rest > 0; i++) {
        if (rest >= a[i] && dp[i + 1][rest - a[i]]) {
            ans.push_back(a[i]);
            rest -= a[i];
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        if (i) cout << " ";
        cout << ans[i];
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
