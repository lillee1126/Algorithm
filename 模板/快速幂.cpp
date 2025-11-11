#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;double ans=1,e=2;
	cin>>n;
	while(n){
		if(n%2==0){
			n=n/2;
			e=e*e;
		}
		else{
			ans=ans*e;
			n=n/2;
			e=e*e;
		}
	}
	cout<<ans;
}
