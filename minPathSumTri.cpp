#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> *a = new vector<int>[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			int b;
			cin>>b;
			a[i].push_back(b);
		}
	}
	
	int dp[n+1];
	
	for(int i=0;i<n;i++)
	{
		dp[i] = a[n-1][i];
	}
	
	for(int i=n-2;i>=0;i--)
	{
		for(int j=0;j<a[i].size();j++)
		{
			dp[j] = a[i][j] + min(dp[j],dp[j+1]);
		}
	}
	cout<<dp[0];
	return 0;
}
