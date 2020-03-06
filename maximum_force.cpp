#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	priority_queue<ll> pQueue;
	for(int i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		pQueue.push(abs(a));
	}
	
	ll sum = 0ll;
	for(int i=0;i<k;i++)
	{
		ll temp = pQueue.top();
		sum += temp*temp;
		pQueue.pop();
	}
	cout<<sum<<endl;
	return 0;
}
