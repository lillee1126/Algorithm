#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>& a,int left,int mid,int right){
	vector<int> b(right-left+1);
	int i=left,j=mid+1,k=0;
	while(i!=mid+1&&j!=right+1){
		if(a[i]<=a[j]){
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	while(i!=mid+1){
		b[k++]=a[i++];
	}
	while(j!=right+1){
		b[k++]=a[j++];
	}
	k=0;
	for(int i=left;i<=right;i++){
		a[i]=b[k++];
	}
}

void mergesort(vector<int>& a,int left , int right){
	if(right>left){
		int mid=left+(right-left)/2;
		mergesort(a,left,mid);
		mergesort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
}
