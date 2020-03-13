#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll DP[60];
ll fun(ll n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	if(n==2)
	{
		return 2;
	}
	if(n==3)
	{
		return 4;
	}
	if(DP[n]!=-1)
	{
		return DP[n];
	}
	DP[n] = fun(n-1) + fun(n-2) + fun(n-3);
	return DP[n];
}

int main() 
{
	for(ll i=0;i<60;i++)
	{
		DP[i] = -1;
	}
	int n;
	cin>>n;
	cout<<fun(n);
	return 0;
}
