#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m;
const int mod=1e9+7;
int qpw(int a,int b){
    int ans=1;
    while(b){
        if(b%2==1){
            ans=ans*a%mod;
        }
        a=a*a%mod;
        b/=2;
    }
    return ans;
}
int cal_euler(int num){
    int phi=num;
    for(int i=2;i<=num/i;i++){
        if(num%i) continue;
        while(num%i==0){
            num=num/i;
        }
        phi=phi/i*(i-1);
    }
    if(num>1){
        phi=phi/num*(num-1);
    }
    return phi;
}
int cal_f(int a,int phi){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans=ans*i%phi;
    }
    return ans;
}
void solve(){
    cin>>n>>m;
    if(n==1){
        cout<<1;
        return ;
    }
    int phi= cal_euler(mod);
    int t=cal_f(m,phi);
    cout<<qpw(n,t);
}
signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    solve();
    return 0;
}