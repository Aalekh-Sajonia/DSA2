#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
ll **mult(ll **arr1,ll **arr2,ll n)
{
	ll **arr = new ll*[n];
	for(ll i=0;i<n;i++)
	{
		arr[i] = new ll[n];
	}
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			arr[i][j] = 0;
			for(ll k=0;k<n;k++)
			{
				arr[i][j] = (arr[i][j]%MOD + (arr1[i][k]%MOD * arr2[k][j]%MOD)%MOD)%MOD;
			}
		}
	}
	return arr;
}

ll **power(ll **arr,ll e,ll n)
{
	if(e==0)
	{
		ll **temp = new ll*[n];
		for(ll i=0;i<n;i++)
		{
			temp[i] = new ll[n];
			for(ll j=0;j<n;j++)
			{
				temp[i][j] = 0;
				if(i==j)
				{
					temp[i][j] = 1;
				}
			}
		}
		return temp;
	}
	if(e==1)
	{
		return arr;
	}
	ll **r = power(arr,e/2,n);
	if(e%2==0)
	{
		return mult(r,r,n);
	}
	else 
	{
		return mult(mult(r,r,n),arr,n);
	}
}

int main()
{
	ll n,e;
	cin>>n>>e;
	ll **arr = new ll*[n];
	for(ll i=0;i<n;i++)
	{
		arr[i] = new ll[n];
	}
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	ll **ans = power(arr,e,n);
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
