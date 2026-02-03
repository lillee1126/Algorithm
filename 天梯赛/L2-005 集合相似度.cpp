#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
const int N=50;
vector<set<int>> v(51);
void solve(){
	cin>>n;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        for(int j=1;j<=num;j++){
            int t;
            cin>>t;
            v[i].insert(t);
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        float cnt=0;
        auto t = v[b].begin();
        auto p=v[b].end();
        p--;
        for(auto i=v[a].begin();i!=v[a].end();i++){
            if(v[b].find(*i)!=v[b].end()){
                cnt++;
            }
        }
        printf("%.2f%%\n",cnt*100/(v[a].size()+v[b].size()-cnt));

    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
