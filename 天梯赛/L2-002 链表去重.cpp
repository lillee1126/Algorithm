#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
struct node{
    string f,t;
    int num;
};
map<int,int> del;
vector<int> d;
string s;
int n;
set<int> st;
const int N=1e5+10;
node a[N];
map<string,int> m;
void solve(){
    cin>>s>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].f>>a[i].num>>a[i].t;
        m[a[i].f]=i;
    }
    vector<int> l;
    int start=m[s];
    l.push_back(start);
    int pre=start;
    while(1){
        if(a[pre].t=="-1"){
            break;
        }
        pre=m[a[pre].t];
        l.push_back(pre);
    }//链表顺序

    for(int i=0;i<l.size();i++){
        int t=abs(a[l[i]].num);
        if(st.count(t)){
            del[i]++;
            d.push_back(i);
        }else{
            st.insert(t);
        }
    }
    st.clear();
    string cur1=s,cur2;
    for(int i=0;i<l.size();){
        if(del.count(i)!=1){
            cout<<cur1<<' '<<a[l[i]].num<<' ';
            if(del.count(i+1)!=1){
                cout<<a[l[i]].t<<endl;
                cur1=a[l[i]].t;
                i++;
            }
            else{
                int flag=0;
                for(int j=i+2;j<l.size();j++){
                    if(del.count(j)!=1){
                        cout<<a[l[j]].f<<endl;
                        cur1=a[l[j]].f;
                        flag=1;
                        i=j;
                        break;
                    }
                }
                if(flag==0){
                    cout<<-1<<endl;
                    break;
                }
            }
        }
    }
    if(d.size()>0){
        cur2=a[l[d[0]]].f;
    }
    for(int i=0;i<d.size();i++){
        cout<<cur2<<' '<<a[l[d[i]]].num<<' ';
        if(i==d.size()-1){
            cout<<-1<<endl;
            break;
        }
        else{
            cout<<a[l[d[i+1]]].f<<endl;
            cur2=a[l[d[i+1]]].f;
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
