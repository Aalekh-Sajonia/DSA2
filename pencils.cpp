#include<bits/stdc++.h>
using namespace std;

int solve(int **arr,int n,int start,int currIndex)
{
	if(n==start)
	{
		return 0;	
	}	
	int currAns = INT_MAX;
	for(int i=0;i<3;i++)
	{
		if(i == currIndex)
		{
			continue;
		}
		int ans = arr[start][i] + solve(arr,n,start+1,i);
		currAns = min(ans,currAns);
	}
	return currAns;
}

int main()
{
	int n;
	cin>>n;
	int **arr = new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i] = new int[3];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<solve(arr,n,0,0);
	return 0;
}
