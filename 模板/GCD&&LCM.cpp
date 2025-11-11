#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){//最大公约数
	if(a<b){
		swap(a,b);
	}
	while(b){
		int temp=a%b;
		a=b;
		b=temp;
	}
	return a;
}
int lcm(int a,int b){//最小公倍数
	return a/gcd(a,b)*b;
}
signed main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<" "<<lcm(a,b);	
}
