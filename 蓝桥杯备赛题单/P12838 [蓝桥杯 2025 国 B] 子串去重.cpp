#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
string s;
int k;
map<int,vector<int>> m;
int find(vector<int>& v,int l,int r){
    int z=0,y=v.size()-1;
    int res=-1;
    while(z<=y){
        int mid=(z+y)/2;
        if(v[mid]<=r&&v[mid]>=l){
            y=mid-1;
            res=mid;
        }
        else if(v[mid]>r){
            y=mid-1;
        }
        else{
            z=mid+1;
        }
    }
    return res;
}
vector<int> gs(int l,int r){
    vector<int> id;
    for(int i=0;i<26;i++){
        if(m.count(i)){
            int index= find(m[i],l,r);
            if(index!=-1){
                id.push_back(m[i][index]);
            }
        }
    }
    sort(id.begin(),id.end());
    return id;
}
void solve(){
	cin>>s;
    for(int i=0;i<s.size();i++){
        m[s[i]-'a'].push_back(i+1);
    }
    cin>>k;
    while(k--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int> s1=gs(a,b);
        vector<int> s2=gs(c,d);
        int ans=abs((int)s1.size()-(int)s2.size());
        for(int i=0;i<min(s1.size(),s2.size());i++){
            if(s[s1[i]-1]!=s[s2[i]-1]){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
