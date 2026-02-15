#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,k;
vector<float> sum;
void solve(){
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        int mx=0,mi=INT_MAX;
        int s=0;
        for(int j=0;j<m;j++){
            int t;
            cin>>t;
            s+=t;
            mx=max(mx,t);
            mi=min(mi,t);
        }
        sum.push_back(s-mx-mi);
    }
    sort(sum.begin(),sum.end());
    for(int i=sum.size()-k;i<sum.size();i++){
        if(i!=sum.size()-k){
            printf(" ");
        }
        printf("%.3f",sum[i]/(m-2));
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
