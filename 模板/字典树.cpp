#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
const int N=3e6+10;
int ch[N][62];
int cnt[N];
int idx;
int getnum(char x){
    if(x>='A'&&x<='Z')
        return x-'A';
    else if(x>='a'&&x<='z')
        return x-'a'+26;
    else
        return x-'0'+52;
}

void insert(string s){
    int p=0;
    for(int i=0;i<s.size();i++){
        int c=getnum(s[i]);
        if(!ch[p][c]){
            ch[p][c]=++idx;
        }
        p=ch[p][c];
        cnt[p]++;
    }
}
int query(string s){
    int p=0;
    for(int i=0;i<s.size();i++){
        int c=getnum(s[i]);
        if(!ch[p][c]){
            return 0;
        }
        p=ch[p][c];
    }
    return cnt[p];
}
void solve(){
    for(int i=0;i<=idx;i++){
        cnt[i]=0;
    }
    for(int i=0;i<=idx;i++){
        for(int j=0;j<=61;j++){
            ch[i][j]=0;
        }
    }
    idx=0;
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        insert(s);
    }
    for(int i=1;i<=q;i++){
        string s;
        cin>>s;
        int ans=query(s);
        cout<<ans<<endl;
    }
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}