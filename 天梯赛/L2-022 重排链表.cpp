#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
string s;
int n;
struct node{
    string pre,next;
    int num;
};
const int N=1e5+10;
node a[N];
map<string,int> m;
void solve(){
    cin>>s>>n;
    vector<int> v;//顺序
    for(int i=1;i<=n;i++){
        cin>>a[i].pre>>a[i].num>>a[i].next;
        m[a[i].pre]=i;
    }
    string cur=s;
    while(1){
        v.push_back(m[cur]);
        if(a[m[cur]].next=="-1"){
            break;
        }
        cur=a[m[cur]].next;
    }
    cout<<a[v[v.size()-1]].pre<<' ';
    for(int i=v.size()-1,j=0;j<=i;i--,j++){
        int bk=v[i],ft=v[j];
        if(i!=v.size()-1){
            cout<<a[bk].pre<<endl<<a[bk].pre<<' ';
        }
        cout<<a[bk].num<<' ';
        if(i==j){
            continue;
        }
        cout<<a[ft].pre<<endl;
        cout<<a[ft].pre<<' '<<a[ft].num<<' ';
    }
    cout<<-1;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
