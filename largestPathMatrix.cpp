#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	int dp[n+1][n+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}	
	}	
	
	for(int i=0;i<n;i++)
	{
		dp[0][i] = arr[0][i];
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==0)
			{
				dp[i][j] = arr[i][j] + max(dp[i-1][j], dp[i-1][j+1]);
			}
			else if(j==n-1)
			{
				dp[i][j] = arr[i][j] + max(dp[i-1][j], dp[i-1][j-1]);
			}
			else
			{
				dp[i][j] = arr[i][j] + max( dp[i-1][j-1], max(dp[i-1][j], dp[i-1][j+1]));
			}
		}
	}
	int maxHere = INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(dp[n-1][i] > maxHere)
		{
			maxHere = dp[n-1][i];	
		}	
	}
	cout<<maxHere;
	return 0;	
}

