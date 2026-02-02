#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n, s;
const int N=1010;
struct node{
    float p,t,w;
};
node a[N];
bool f(node aa,node bb){
    return aa.p>bb.p;
}
void solve(){
	cin>>n>>s;
    float ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i].t;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i].w;
    }
    for(int i=1;i<=n;i++){
        a[i].p=a[i].w/a[i].t;
    }
    sort(a+1,a+1+n,f);
    for(int i=1;i<=n;i++){
        if(s>=a[i].t){
            ans+=a[i].w;
            s-=a[i].t;
        }
        else{
            ans+=s*a[i].p;
            break;
        }
    }
    printf("%.2f",ans);
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
