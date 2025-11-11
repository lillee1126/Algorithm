#include <bits/stdc++.h>
using namespace std;
const int N=10000;
void get_next(string a,int next[]){
	int j=0;
	next[0]=0;
	for(int i=1;i<a.size();i++){
		while(j>0&&a[i]!=a[j]){
			j=next[j-1];
		}
		if(a[i]==a[j])
			j++;
		next[i]=j;
	}
}
int main(){
	string a,b;
	cin>>a>>b;
	int next[N];
	get_next(b,next);
	int j=0;
	for(int i=0;i<a.size();i++){
		while(j>0&&a[i]!=b[j]){
			j=next[j-1];
		}
		if(a[i]==b[j]){
			j++;
		}
		if(j==b.size()){
			cout<<i-b.size()+1<<endl;
			j=next[j-1];
		}
	}
}
