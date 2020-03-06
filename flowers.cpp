#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	int sum = 0;
	int i=0;
	if(n%2==0)
	{
		i=1;	
	}
	for(;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			arr[i] = arr[i]-1;
		}
		sum += arr[i];
	}
	cout<<sum;
	return 0;	
}
