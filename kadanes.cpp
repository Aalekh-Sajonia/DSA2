#include<bits/stdc++.h>
using namespace std;

int kadane(int *arr,int n)
{
	int max = 0;
	int totalMax = INT_MIN;
	for(int i=0;i<n;i++)
	{
		max += arr[i];
		if(max > totalMax)
		{
			totalMax = max;
		}
		if(max < 0)
		{
			max = 0;
		}
	}
	return totalMax;
}

int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans = kadane(arr,n);
	cout<<ans;	
	return 0;
}
