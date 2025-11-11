#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int y=0;
	int al,bl;
	cin>>a>>b;
	int pos=0;
	al=a.size();
	bl=b.size();
	int n1[10005]={0},n2[10005],ans[10005]={0};
	for(int i=0,j=al-1;i<al;i++,j--){
		n1[i]=a[j]-'0';
	}
	for(int i=0,j=bl-1;i<bl;i++,j--){
		n2[i]=b[j]-'0';
	}	
	if(al>bl){
		for(pos=0;pos<al;pos++){
			ans[pos]=(n1[pos]+n2[pos]+y)%10;
			y=(n1[pos]+n2[pos]+y)/10;
		}
	}
	else
	{
		for(pos=0;pos<bl;pos++){
			ans[pos]=(n1[pos]+n2[pos]+y)%10;
			y=(n1[pos]+n2[pos]+y)/10;
		}
	}
	if(y)
		cout<<y;
	for(int i=pos-1;i>=0;i--)
		cout<<ans[i];
}
