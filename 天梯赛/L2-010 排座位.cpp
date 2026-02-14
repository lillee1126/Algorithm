#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,k;
const int N=1e2+10;
int fa[N];
vector<map<int,int>> v(N);
int find(int x){
    if(fa[x]!=x){
        fa[x]=find(fa[x]);
    }
    return fa[x];
}
void merge(int x,int y){
    fa[find(x)]=fa[find(y)];
}
void solve(){
	cin>>n>>m>>k;
    for(int i=0;i<=n;i++){
        fa[i]=i;
    }
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(c==1){
            merge(a,b);
        }
        else{
            v[a][b]++;
            v[b][a]++;
        }
    }
    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        if(v[a].count(b)==1&&find(a)==find(b)){
            cout<<"OK but..."<<endl;
        }
        else if(v[a].count(b)==1&&find(a)!=find(b)){
            cout<<"No way"<<endl;
        }
        else if(v[a].count(b)!=1&&find(a)==find(b)){
            cout<<"No problem"<<endl;
        }
        else{
            cout<<"OK"<<endl;
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
