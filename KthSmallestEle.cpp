#include<bits/stdc++.h>
using namespace std;

int insSort(int *arr,int n,int pos)
{
	for(int i=0;i<n;i++)
	{
		int j=i-1;
		int temp = arr[i];
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1] = arr[j];
			j--;
 		} 
		arr[j+1] = temp;
	}
	return arr[pos];
}

int main()
{
	int n;
	cin>>n;
	int *arr = new int[n];
	int pos;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>pos;
	
	int ans = insSort(arr,n,pos-1);
	cout<<ans;
	return 0;
}
