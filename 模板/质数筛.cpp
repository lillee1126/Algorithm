#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[5010];
	for(int i=0;i<=n;i++){
		a[i]=0;
	}
	for(int i=2;i<=n/2;i++){
		if(a[i]==1){
			continue;
		}
		for(int j=2;j*i<=n;j++){
			a[j*i]=1;
		}
	}
	for(int i=1;i<=n;i++){
		if(!a[i]){
			cout<<i<<" ";
		}
	}
}
