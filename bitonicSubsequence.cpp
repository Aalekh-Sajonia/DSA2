#include<bits/stdc++.h>
using namespace std;

int longestBitonicSubarray(int *arr,int n)
{
	int *lis = new int[n];
	
	for(int i=0;i<n;i++)
	{
		lis[i] = 1;
	}
	
	for(int i=1;i<n;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(arr[j] < arr[i])
			{
				int possibleAns = lis[j] + 1;
				if(possibleAns > lis[i])
				{
					lis[i] = possibleAns;
				}
			}
		}
	}
	
	int *lds = new int[n];
	
	for(int i=0;i<n;i++)
	{
		lds[i] = 1;
	}
	
	for(int i=n-2;i>=0;i--)
	{
		for(int j=n-1;j>i;j--)
		{
			if(arr[j] < arr[i])
			{
				int possibleAns = lds[j] + 1;
				if(possibleAns > lds[i])
				{
					lds[i] = possibleAns;
				}
			}
		}
	}
	
	int max = lds[0] + lis[0] - 1;
	
	for(int i=1;i<n;i++)
	{
		if(lis[i]+lds[i]-1 > max)
		{
			max = 	lis[i]+lds[i]-1;
		}	
	}
	return max;
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
	cout<<longestBitonicSubarray(arr,n);
	return 0;
}
