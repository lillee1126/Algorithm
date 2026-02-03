#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
struct node{
    int mi,num;
    float cnt,sq;
};
map<int,node> m;
const int N=1e5;
int ex[N];
int fa[N];
int find(int x){
    if(fa[x]==x){
        return fa[x];
    }
    else{
        return fa[x]=find(fa[x]);
    }
}
void merge(int x, int y) {
    int fx = find(x);
    int fy = find(y);
    if (fx == fy) return;
    if (fx < fy) fa[fy] = fx;
    else fa[fx] = fy;
}

int h[N];
int sq[N];
bool f(node a,node b){
    if(a.sq!=b.sq){
        return a.sq>b.sq;
    }
    return a.mi<b.mi;
}
void solve(){
	cin>>n;
    for(int i=0;i<N;i++){
        fa[i]=i;
    }
    for(int i=1;i<=n;i++){
        int me,ft,mt,k;
        cin>>me>>ft>>mt>>k;
        ex[me]=1;
        if(ft!=-1){
            ex[ft]=1;
            merge(me,ft);
        }
        if(mt!=-1){
            ex[mt]=1;
            merge(me,mt);
        }
        for(int j=0;j<k;j++){
            int t;
            cin>>t;
            ex[t]=1;
            merge(t,me);
        }
        cin>>h[me]>>sq[me];
    }
    for(int i=0;i<N;i++){
        if(!ex[i]){
            continue;
        }
        int root=find(i);
        if(m.count(root)!=1){
            m[root]={i,1,(float)h[i],(float)sq[i]};
        }
        else{
            m[root]={min(i,m[root].mi),m[root].num+1,m[root].cnt+h[i],m[root].sq+sq[i]};
        }
    }
    for(auto it = m.begin();it!=m.end();it++){
        it->second.cnt=it->second.cnt/it->second.num;
        it->second.sq=it->second.sq/it->second.num;
    }
    vector<node> v;
    for(auto it=m.begin();it!=m.end();it++){
        v.push_back(it->second);
    }
    sort(v.begin(),v.end(),f);
    printf("%d\n",m.size());
    for(auto i:v){
       string t= to_string(i.mi);
       for(int j=t.size();j<4;j++){
           printf("0");
       }
       printf("%lld %lld %.3f %.3f\n",i.mi,i.num,i.cnt,i.sq);
    }
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
