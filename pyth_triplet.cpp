#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	ll a1 = a*a;
	ll b1 = b*b;
	ll c1 =	c*c;
	if(a1+b1 == c1)
	{
		cout<<"YES";
	}
	else if(a1+c1 == b1)
	{
		cout<<"YES";
	}
	else if(b1+c1 == a1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	cout<<endl;
	return 0;
}
