#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
int dp[101];
ll fun(ll n)
{
	if(n<=2)
	{
		return 1;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	dp[n] = fun(n-2) + fun(n-3);
	dp[n] = dp[n] % MOD;
	return dp[n];
}

int main()
{
	for(int i=0;i<101;i++)
	{
		dp[i] = -1;
	}
	ll n;
	cin>>n;
	cout<<fun(n);
	return 0;
}
