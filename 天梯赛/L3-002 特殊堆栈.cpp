#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
multiset<int> l,r;
stack<int> st;
void adjust(){
    if(l.empty()&&r.empty()){
        return ;
    }
    if(l.size()>r.size()){
        int t = l.size()-r.size();
        if(t==1){
            if(!r.empty()){
                auto it=l.end();
                it--;
                if(*it>*r.begin()){
                    r.insert(*it);
                    l.insert(*r.begin());
                    r.erase(r.begin());
                    l.erase(it);
                }
            }
        }
        else{
            auto it =l.end();
            it--;
            r.insert(*it);
            l.erase(it);
        }
    }
    else if(l.size()==r.size()){
        auto it = l.end();
        it--;
        if(*it>*r.begin()){
            r.insert(*it);
            l.insert(*r.begin());
            r.erase(r.begin());
            l.erase(it);
        }
    }
    else{
        l.insert(*r.begin());
        r.erase(r.begin());
    }
};
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="Pop"){
            if(st.empty()){
                cout<<"Invalid"<<endl;
            }
            else{
                int x=st.top();
                st.pop();
                cout<<x<<endl;
                auto it =l.end();
                it--;
                if(x>*it){
                    r.erase(r.find(x));
                }
                else{
                    l.erase(l.find(x));
                }
            }
            adjust();
        }
        else if(s=="Push"){
            int t;
            cin>>t;
            st.push(t);
            l.insert(t);
            adjust();
        }
        else if(s=="PeekMedian"){
            if(st.empty()){
                cout<<"Invalid"<<endl;
            }
            else {
                auto it = l.end();
                it--;
                cout << *it << endl;
            }
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
