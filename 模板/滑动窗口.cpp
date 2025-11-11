#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1000010],h[1000010],l[1000010];

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	deque<int> q;
	for(int i=0;i<k;i++){
		while(!q.empty()&&a[i]>=a[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}
	h[0]=a[q.front()];
	for(int i=k;i<n;i++){
		while(!q.empty()&&a[i]>=a[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
		if(i-q.front()>=k){
			q.pop_front();
		}
		h[i-k+1]=a[q.front()];
	}
	
	q.clear();
	for(int i=0;i<k;i++){
		while(!q.empty()&&a[i]<=a[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}
	l[0]=a[q.front()];
	for(int i=k;i<n;i++){
		while(!q.empty()&&a[i]<=a[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
		if(i-q.front()>=k)
			q.pop_front();
		l[i-k+1]=a[q.front()];
	}
	for(int i=0;i<n-k+1;i++){
		cout<<l[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n-k+1;i++){
		cout<<h[i]<<" ";
	}
	
}
