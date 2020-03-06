#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int temp = arr[n-1] * s;
	cout<<ceil(float(temp)/1000);
	return 0;
}
