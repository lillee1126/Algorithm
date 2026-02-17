#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N=1010;
int n,m;
int a[N];
map<int,int> mp;

void solve(){
    cin>>n>>m;
    cin>>a[1];
    mp[a[1]]=1;

    for(int i=2;i<=n;i++){
        cin>>a[i];
        mp[a[i]]=i;
        int j=i;
        while(j>1 && a[j/2]>a[j]){
            swap(a[j/2],a[j]);
            swap(mp[a[j/2]],mp[a[j]]);
            j/=2;
        }
    }
    cin.ignore();
    while(m--){
        string s;
        getline(cin,s);
        stringstream ss(s);

        int x,y;
        string temp;
        ss>>x>>temp;

        if(s.find("root")!=string::npos){
            if(mp[x]==1) cout<<"T"<<endl;
            else cout<<"F"<<endl;
        }
        else if(s.find("siblings")!=string::npos){
            ss>>y;
            if(mp[x]/2==mp[y]/2) cout<<"T"<<endl;
            else cout<<"F"<<endl;
        }
        else if(s.find("parent")!=string::npos){
            ss>>temp>>temp>>temp>>y;
            if(mp[y]/2==mp[x]) cout<<"T"<<endl;
            else cout<<"F"<<endl;
        }
        else if(s.find("child")!=string::npos){
            ss>>temp>>temp>>temp>>y;
            if(mp[x]/2==mp[y]) cout<<"T"<<endl;
            else cout<<"F"<<endl;
        }
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
