//
// Created by lillee on 2024/12/3.
//
#include <bits/stdc++.h>
using  namespace std;
#define ll long long
ll x,y;
ll exgcd(ll a,ll b){
    if(!b) {
        x = 1;
        y = 0;
        return a;
    }
    int gcd= exgcd(b,a%b);
    ll temp=x;
    x=y;
    y=temp-a/b*y;
    return gcd;

}
int main(){
    ll a,b;
    cin>>a>>b;
    ll d=exgcd(a,b);
    cout<<(x%b+b)%b;
    return 0;
}