#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	int min = INT_MAX;
	int *store = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		int flag = 0;
		for(int j=i-1;j>=0;j--)
		{
			if(arr[i]>arr[j])
			{
				cout<<arr[j]<<" ";
				flag = 1;
				break; 
			}
		}
		if(flag == 0)
			cout<<"-1"<<" ";
	}
	
	return 0;
}
