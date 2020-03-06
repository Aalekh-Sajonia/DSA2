#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
ll solve(string str,ll n,ll *dp)
{
	if(n == 1)
	{
		return 1;
	}
	if(n == 0)
	{
		return 1;
	}
	
	if(dp[n] > 0)
	{
		return dp[n];
	}
	
	ll sol = solve(str,n-1,dp)%MOD;
	int check = ((str[n-2]-'0')*10 + (str[n-1]-'0')) ;
	if(check >=10 && check<= 26 && n>1)
	{
		sol = (sol%MOD + solve(str,n-2,dp)%MOD)%MOD;
	}
	else if( check >=10 && check<= 26)
	{
		sol++;
	}
	dp[n] = sol;
	return sol;
}
int main()
{
	while(true)
	{
		string str;
		cin>>str;
		if(str[0] == '0')
		{
			break;
		}
		ll n = str.length();
		ll *dp = new ll[5005];
		for(ll i=0;i<5005;i++)
		{
			dp[i] = 0;
		}
		
		cout<<solve(str,n,dp);
		cout<<endl;
	}
	
	return 0;
}
