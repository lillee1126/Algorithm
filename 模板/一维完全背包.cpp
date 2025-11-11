#include <iostream>
using namespace std;
int dp[1001];
int main()
{
	int n, V;
	cin>>n>>V;
	int w[n],v[n];
	for(int i=1;i<=n;i++)
		cin>>w[i]>>v[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=w[i];j<=V;j++)
		{
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	cout<<dp[V];
}
