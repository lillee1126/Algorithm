#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
const int N=1e4+10;
struct node{
    int id,cnt,m;
};
node a[N];
bool f(node aa,node bb){
    if(aa.m!=bb.m){
        return aa.m>bb.m;
    }
    else if(aa.cnt!=bb.cnt){
        return aa.cnt>bb.cnt;
    }
    return aa.id<bb.id;
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;
        a[i].id=i;
        for(int j=0;j<t;j++){
            int p,q;
            cin>>p>>q;
            a[i].m-=q;
            a[p].m+=q;
            a[p].cnt++;
        }
    }
    sort(a+1,a+1+n,f);
    for(int i=1;i<=n;i++){
        printf("%d %.2f\n",a[i].id,a[i].m/100.0);
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
