#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll count(ll a,ll b)
{
	if(a==b)
	{
		return 0;
	}
	if(b>a)
	{
		return b-a;
	}
	
	ll count = 0;
	if(a%2!=0)
	{
		a++;
		count++;
	}
	

	
	while(a>b)
	{
		if(a%2!=0)
		{
			a++;
			count++;
		}
		if(a%2==0)
		{
			a = a/2;
		}
		count++;
	}
	
	return (count + (b-a));
}

int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<count(a,b);
	return 0;
}
