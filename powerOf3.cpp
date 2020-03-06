#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solver(ll a)
{
	ll pow = 1ll;
	ll carry = 0ll;
	ll sum = 0ll;
	while(a)
	{
		ll mod = a%3;
		if(mod+carry < 2)
		{
			sum += (mod+carry) * pow;
			carry = 0;
		}
		else
		{
			carry = 1ll;
			sum = 0ll;
		}
		pow *= 3;
		a /= 3;
	}
	
	if(carry == 1)
	{
		return pow;
	}
	else
	{
		return sum;
	}
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a;
		cin>>a;
		ll ans = solver(a);
		cout<<ans<<endl;
	}

	return 0;
}
