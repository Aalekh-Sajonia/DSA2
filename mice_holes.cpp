#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int k;
	cin>>n;
	int *mice = new int[n];
	int *holes= new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>mice[i];
	}
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>holes[i];
	}
	sort(mice,mice+n,greater<int>());
	sort(holes,holes+n,greater<int>());
	
	int sum = INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(sum < abs(mice[i]-holes[i]))
		{
			sum = abs(mice[i]-holes[i]);
		}
	}
	cout<<sum;
	
	return 0;
}
