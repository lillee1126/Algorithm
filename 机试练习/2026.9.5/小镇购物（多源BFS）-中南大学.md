题目描述
CSU镇上有n个商店，n个商店有m条双向小路相连，在这n个商店里共有k种不同商品，每个商店只有一种商品，每条路的权重都为1。

现问你从每个商店出发，买够k种商品中的s种商品所需的最小代价。每个商店可以同时派出多个人买不同商品，每人仅能购买一件商品，买够即可。

输入格式
输入包含多组测试用例。

对于每一组输入包含四个数字n, m, k, s (1<=n<=m<=1e5, 1<=s<=k<=min(n,100))

分别代表商店数，小路数，商品种数，需要的商品数。

接下来n个数 a1, a2...an (1<=ai<=k), ai代表第i个商店的商品编号。

接下来m行小路(u,v), u≠v, 代表商店u和v之间有小路连接。

输出格式
输出n个数字，第i个数字代表从商店i出发买够s种商品所需的最小代价。

数据范围
1<=n<=m<=1e5

1<=s<=k<=min(n,100)

输入样例1
5 5 4 3
1 2 4 3 2
1 2
2 3
3 4
4 1
4 5
7 6 3 2
1 2 3 3 2 2 1
1 2
2 3
3 4
2 5
5 6
6 7

输出样例1
2 2 2 2 3 
1 1 1 2 2 1 1
···
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int INF = 1e18;

void solve() {
    int n, m, k, s;

    while (cin >> n >> m >> k >> s) {

        vector<int> a(n + 1);

        // pos[type] 存出售 type 商品的商店
        vector<vector<int>> pos(k + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]].push_back(i);
        }

        vector<vector<int>> e(n + 1);

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;

            e[u].push_back(v);
            e[v].push_back(u);
        }

        // ans[u][type]：
        // 商店 u 到最近的 type 商品商店的距离
        vector<vector<int>> ans(
                n + 1,
                vector<int>(k + 1, INF)
        );

        for (int type = 1; type <= k; type++) {

            queue<int> q;

            // 多源 BFS
            for (int j = 0; j < pos[type].size(); j++) {
                int u = pos[type][j];

                ans[u][type] = 0;
                q.push(u);
            }

            while (!q.empty()) {
                int u = q.front();
                q.pop();

                for (int v : e[u]) {
                    if (ans[v][type] > ans[u][type] + 1) {
                        ans[v][type] = ans[u][type] + 1;
                        q.push(v);
                    }
                }
            }
        }

        // 每个商店选择距离最近的 s 种商品
        for (int i = 1; i <= n; i++) {

            vector<int> dis;

            for (int type = 1; type <= k; type++) {
                dis.push_back(ans[i][type]);
            }

            sort(dis.begin(), dis.end());

            int res = 0;

            for (int j = 0; j < s; j++) {
                res += dis[j];
            }

            cout << res << ' ';
        }

        cout << endl;
    }
}

signed main() {

    solve();

    return 0;
}
```
