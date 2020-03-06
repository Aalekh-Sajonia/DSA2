#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll *count(ll *arr,ll n)
{
	ll pos=0;
	ll neg=0;
	ll zero=0;
	ll l = n-1;
	for(ll i=0;i<n;i++)
	{
		ll negCount = 0;
		ll temp = arr[i];
		for(ll j=i;j<n;j++)
		{
			if(arr[j] == 0)
			{
				zero += (l-j)+1;
				break;
			}
			if(arr[j]<0)
			{
				negCount++;
				if(negCount%2!=0)
				{
					neg++;
				}
				else
				{
					pos++;
				}
			}
			else if(arr[j]>0)
			{
				if(negCount%2==0)
				{
					pos++;	
				}	
				else
				{
					neg++;
				}
			}
		}
	}
	ll *ans = new ll[3];
	ans[0] = neg;
	ans[1] = zero;
	ans[2] = pos;
	return ans;
}


int main()
{
	ll n;
	cin>>n;
	ll *arr = new ll[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	ll *ans = count(arr,n);
	cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
	return 0;
}
