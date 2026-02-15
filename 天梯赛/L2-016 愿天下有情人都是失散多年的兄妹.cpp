#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e6+10;
char gender[N];
vector<int> e[N];
set<int> s1,s2;
bool vis[N];
void dfs(int d,int cur){
    if(d>5){
        return ;
    }
    s1.insert(cur);
    for(int i=0;i<e[cur].size();i++){
        if(!vis[e[cur][i]]) {
            vis[e[cur][i]]=1;
            dfs(d + 1, e[cur][i]);
        }
    }
}
void dfs2(int d,int cur){
    if(d>5){
        return ;
    }
    s2.insert(cur);
    for(int i=0;i<e[cur].size();i++){
        if(!vis[e[cur][i]]) {
            vis[e[cur][i]]=1;
            dfs2(d + 1, e[cur][i]);
        }
    }
}
void solve(){
    int n;
	cin>>n;
    for(int i=0;i<n;i++){
        int me,fa,ma;
        char sex;
        cin>>me>>sex>>fa>>ma;
        gender[me]=sex;
        if(fa!=-1) {
            e[me].push_back(fa);
            gender[fa] = 'M';
        }
        if(ma!=-1) {
            gender[ma] = 'F';
            e[me].push_back(ma);
        }
    }
    int k;
    cin>>k;
    while(k--){
        int a,b;
        cin>>a>>b;
        s1.clear();
        s2.clear();
        memset(vis,0,sizeof vis);
        dfs(1,a);
        memset(vis,0,sizeof vis);
        dfs2(1,b);
        if(gender[a]==gender[b]){
            cout<<"Never Mind"<<endl;
        }
        else{
            int flag=1;
            for(auto it=s1.begin();it!=s1.end();it++){
                if(s2.find(*it)!=s2.end()){
                    flag=0;
                    break;
                }
            }
            if(flag){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
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
