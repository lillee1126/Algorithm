#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
vector<pair<string,pair<int,float>>> v;
bool f(pair<string,pair<int,float>> aa,pair<string,pair<int,float>> bb){
    if(aa.second.first!=bb.second.first){
        return aa.second.first>bb.second.first;
    }
    else{
        return aa.second.second<bb.second.second;
    }
}
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        map<int,int> m;
        float k;
        cin>>k;
        for(int j=1;j<=k;j++){
            int t;
            cin>>t;
            m[t]++;
        }
        v.push_back({s,{m.size(),k/m.size()}});
    }
    sort(v.begin(),v.end(),f);
    for(int i=0;i<v.size()&&i<=2;i++){
        if(i!=0){
            cout<<' ';
        }
        cout<<v[i].first;
    }
    while(n<3){
        cout<<" -";
        n++;
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
