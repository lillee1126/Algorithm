#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
const int N=1e4+10;
int fa[N];
map<int,int> m;
int find(int x){
    if(fa[x]!=x){
        fa[x]=find(fa[x]);
    }
    return fa[x];
}
void merge(int x,int y){
    int fx=find(x),fy=find(y);
    if(fx>fy){
        fa[fx]=fy;
    }
    else{
        fa[fy]=fx;
    }
}
void solve(){
    cin>>n;
    for(int i=1;i<N;i++){
        fa[i]=i;
    }
    for(int i=0;i<n;i++){
        int f,t;
        cin>>t>>f;
        m[f]++;
        for(int j=1;j<t;j++){
            int s;
            cin>>s;
            m[s]++;
            merge(s,f);
        }
    }
    map<int,int> mp;
    for(int i = 1;i<=m.size();i++){
        mp[find(i)]++;
    }
    cout<<m.size()<<' '<<mp.size()<<endl;
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(find(a)==find(b)){
            cout<<"Y"<<endl;
        }
        else{
            cout<<"N"<<endl;
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
