#include <bits/stdc++.h>
using namespace std;
const int inf=1e5;
int vis[6];//标记是否到达i
int dis[6];//到i的距离
int main(){
	int a[6][6]={
		{0,18,inf,inf,15,inf},
		{18,0,20,60,12,inf},
		{inf,20,0,30,18,inf},
		{inf,60,30,0,inf,10},
		{15,12,18,inf,0,15},
		{inf,inf,inf,10,15,0}
	};
	memset(vis,0,sizeof(vis));
	for(int i=0;i<6;i++){
		dis[i]=inf;
	}
	dis[0]=0;
	for(int i=0;i<6;i++){
		//找下一个点
		int temp=-1;
		for(int j=0;j<6;j++){
			if(vis[j]==0&&(temp==-1||(dis[j]<dis[temp]))){
				temp=j;
			}
		}
		vis[temp]=1;
		//更新到各点的最短距离
		for(int j=0;j<6;j++){
			dis[j]=min(dis[j],dis[temp]+a[temp][j]);	
		}
	}
	for(int i=0;i<6;i++){
		cout<<dis[i]<<" ";
	}
	return 0;
}
