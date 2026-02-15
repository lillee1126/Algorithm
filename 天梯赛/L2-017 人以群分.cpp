#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
const int N=1e5+10;
int a[N];
void solve(){
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int s1=0,s2=0;
    for(int i=1;i<=n;i++){
        if(i<=n/2){
            s1+=a[i];
        }else{
            s2+=a[i];
        }
    }
    if(n%2==0){
        cout<<"Outgoing #: "<<n/2<<endl;
        cout<<"Introverted #: "<<n/2<<endl;
        cout<<"Diff = "<<s2-s1;
    }
    else{
        cout<<"Outgoing #: "<<n/2+1<<endl;
        cout<<"Introverted #: "<<n/2<<endl;
        cout<<"Diff = "<<s2-s1;
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
