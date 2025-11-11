#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
const int N=110;
vector<int> a[N];
int din[N];
void solve(){
	cin>>n;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        if(t==0){
            break;
        }
        a[i].push_back(t);
        din[t]++;
    }
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(din[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        cout<<cur;
        for(int i=0;i<a[cur].size();i++){
            din[a[cur][i]]--;
            if(din[a[cur][i]]==0){
                q.push(a[cur][i]);
            }
        }
    }
}
signed main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	solve();
	return 0;
}