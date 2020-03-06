#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll *arr = new ll[100]();
ll fib(ll a)
{
	if(a <= 1)
	{
		return a;
	}
	if(arr[a]!=0)
	{
		return arr[a];
	}
	return  arr[a] = fib(a-1) + fib(a-2);
}

int main()
{
	ll a;
	cin>>a;
	ll c = fib(a);
	ll sum = 0;
	arr[1] = 1;
	for(int i=1;i<=a;i++)
	{
		sum += arr[i];
	}
	cout<<sum;
	return 0;
}
