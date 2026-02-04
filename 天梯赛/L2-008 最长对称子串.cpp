#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
string s;
int len(int l,int r){
    while(l>=0&&r<s.size()&&s[l]==s[r]){
        l--;
        r++;
    }
    return r-l-1;
}
void solve(){
    getline(cin,s);
    int ans=0;
    for(int i=0;i<s.size();i++){
        int s1=len(i,i);
        int s2=len(i,i+1);
        ans=max({ans,s1,s2});
    }
    cout<<ans;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
