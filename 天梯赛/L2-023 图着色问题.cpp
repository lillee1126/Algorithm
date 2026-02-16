#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=510;
vector<int> e[N];
int n,m,k;
int a[N];
bool check(){
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        mp[a[i]]++;
        if(a[i]>n){
            return 0;
        }
        for(int j=0;j<e[i].size();j++){
            if(a[i]==a[e[i][j]]){
                return 0;
            }
        }
    }
    if(mp.size()!=k){
        return 0;
    }
    return 1;
}
void solve(){
	cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        int aa,b;
        cin>>aa>>b;
        e[aa].push_back(b);
        e[b].push_back(aa);
    }
    int t;
    cin>>t;
    while(t--){
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        if(check()){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
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
