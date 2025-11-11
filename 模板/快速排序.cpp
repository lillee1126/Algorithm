#include <bits/stdc++.h>
using namespace std;
void quicksort(int a[],int left,int right){
	if(left>=right){
		return;
	}
	int temp=a[left];
	int i=left-1;
	int j=right+1;
	while(i<j){
		while(temp>a[j]){
			j--;
		}
		while(temp<a[i]){
			i++;
		}
		if(i<j)
			swap(a[i],a[j]);
	}
	quicksort(a,left,j);
	quicksort(a,j+1,right);
}	

int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
