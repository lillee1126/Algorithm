#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=1e5+10;
int a[N];
int n;
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    set<int> s;
    s.insert(a[1]);
    for(int i=2;i<=n;i++){
        if(a[i]>*s.rbegin()){
            s.insert(a[i]);
        }
        else{
            s.erase(s.upper_bound(a[i]));
            s.insert(a[i]);
        }
    }
    cout<<s.size();
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
