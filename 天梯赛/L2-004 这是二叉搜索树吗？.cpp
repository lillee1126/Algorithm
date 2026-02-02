#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
int a[1010];
vector<int> ans;
bool check(int l,int r,bool mirror){
    if(l>r) return 1;
    if(l==r){
        ans.push_back(a[l]);
        return 1;
    }
    int root = a[l];
    int i=l+1;
    if(!mirror){
        while(i<=r&&a[i]<root) i++;
        for(int j=i;j<=r;j++){
            if(a[j]<root){
                return false;
            }
        }
    }
    else{
        while(i<=r&&a[i]>=root) i++;
        for(int j=i;j<=r;j++){
            if(a[j]>=root){
                return false;
            }
        }
    }
    if(!check(l+1,i-1,mirror)) return 0;
    if(!check(i,r,mirror)) return 0;
    ans.push_back(root);
    return 1;
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"YES"<<endl;
        cout<<a[1];
        return;
    }
    ans.clear();
    if(check(1,n,0)){
        cout<<"YES"<<endl;
    }
    else{
        ans.clear();
        if(check(1,n,1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO";
            return;
        }
    }
    for(int i=0;i< ans.size();i++){
        if(i){
            cout<<' ';
        }
        cout<<ans[i];
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
