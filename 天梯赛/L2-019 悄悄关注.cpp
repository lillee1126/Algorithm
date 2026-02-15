#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
map<string,int> m;
int sum;
struct node{
    int cnt;
    string id;
};
const int N=1e5+10;
node a[N];
bool f(node aa,node bb){
    return aa.cnt>bb.cnt;
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int k;
    cin>>k;
    for(int i=1;i<=k;i++){
        cin>>a[i].id>>a[i].cnt;
        sum+=a[i].cnt;
    }
    sort(a+1,a+1+n,f);
    if(k==0){
        cout<<"Bing Mei You";
        return;
    }
    float p = sum/(float)k;
    vector<string> ans;
    for(int i=1;i<=k;i++){
        if(p<a[i].cnt&&!m.count(a[i].id)){
            ans.push_back(a[i].id);
        }
    }
    if(ans.size()==0){
        cout<<"Bing Mei You";
    }
    else{
        sort(ans.begin(),ans.end());
        for(auto i:ans){
            cout<<i<<endl;
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
