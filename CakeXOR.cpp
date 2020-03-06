#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	ll *arr = new ll[n];
	ll XOR = 0;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
		XOR = XOR ^ arr[i];
	}
	for(ll i=0;i<n;i++)
	{
		ll temp = XOR ^ arr[i];
		cout<<temp<<" ";
	}	
	return 0;
}
