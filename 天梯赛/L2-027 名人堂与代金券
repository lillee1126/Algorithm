#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
struct node {
    string s;
    int num;
};
int n,k,g;
const int N=1e4+10;
node a[N];
bool f(node aa,node bb){
    if(aa.num!=bb.num){
        return aa.num>bb.num;
    }
    return aa.s<bb.s;
}
void solve(){
    cin>>n>>g>>k;
    int s=0;
    for(int i=1;i<=n;i++){
        cin>>a[i].s>>a[i].num;
        if(a[i].num>=g){
            s+=50;
        }
        else if(a[i].num>=60){
            s+=20;
        }
    }
    sort(a+1,a+1+n,f);
    cout<<s<<endl;
    int rk=1;
    cout<<1<<' '<<a[1].s<<' '<<a[1].num<<endl;
    for(int i=2;i<=k;i++){
        if(a[i].num==a[i-1].num){
            cout<<rk<<' '<<a[i].s<<' '<<a[i].num<<endl;
        }
        else{
            rk=i;
            cout<<rk<<' '<<a[i].s<<' '<<a[i].num<<endl;
        }
    }
    int i=k+1;
    while(a[i].num==a[i-1].num){
        cout<<rk<<' '<<a[i].s<<' '<<a[i].num<<endl;
        i++;
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
