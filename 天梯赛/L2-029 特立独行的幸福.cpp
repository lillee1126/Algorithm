#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e4+1;
bool is[N];
void init(){
    for(int i=2;i*i<N;i++){
        if(is[i]==1){
            continue;
        }
        for(int j=2;i*j<N;j++){
            is[i*j]=1;
        }
    }
}
int a,b;
vector<pair<int,int>> ans;
bool nfind=1;
void check(int n,set<int> &o){
    int cnt=0;
    int t=n;
    set<int> m;
    int c=0;
    while(n!=1&&!m.count(n)&&c<1000){
        c++;
        m.insert(n);
        string s= to_string(n);
        n=0;
        for(int i=0;i<s.size();i++){
            n+=(s[i]-'0')*(s[i]-'0');
        }
        cnt++;
    }
    m.erase(t);
    if(n==1){
        nfind=0;
        if(!is[t]){
            ans.push_back({t,cnt*2});
        }
        else{
            ans.push_back({t,cnt});
        }
        for(auto it:m){
            o.insert(it);
        }
    }
}
void solve(){
    init();
    cin>>a>>b;
    set<int> m;
    for(int i=a;i<=b;i++){
        if(m.count(i)){
            continue;
        }
        check(i,m);
    }
    if(nfind){
        cout<<"SAD";
        return;
    }
    for(auto i:ans){
        if(!m.count(i.first)){
            cout<<i.first<<' '<<i.second<<endl;
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
