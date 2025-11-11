#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int fa[N];
int n,m;
void init(){
    for(int i=1;i<=n;i++){
        fa[i]=i;
    }
}
int find(int x) {
    if (x != fa[x])
        fa[x] = find(fa[x]);
    return fa[x];
}

void merge(int x, int y) {
    int fx = find(x);
    int fy = find(y);
    if (fx == fy) return; // 已经在一个集合

    if (fx < fy) {
        fa[fx] = fy; // 小编号并入大编号
    } else {
        fa[fy] = fx;
    }
}

int main()
{
    cin>>n>>m;
    init();
	int x,y;
	for(int i=1;i<=m;i++){
		//输入有关系的元素
		cin>>x>>y;
        merge(x,y);
	}
	int q;
    cin>>q;
	for(int i=1;i<=q;i++){
		//查询
        cin>>x>>y;
		//如果祖先节点相同，具有亲戚关系
		if(find(x)==find(y)){
			printf("Yes\n");
		}
		//如果祖先节点不同，则不具有亲戚关系
		else{
			printf("No\n");
		}
	}
	return 0;
}

