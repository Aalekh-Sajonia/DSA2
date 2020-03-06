#include <bits/stdc++.h> 
using namespace std; 

int getPairsCount(int *arr, int n, int k) 
{ 
	unordered_map<int, int> m; 

	for (int i=0; i<n; i++) 
		m[arr[i]]++; 
	
	for(auto x: m)	
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	
	int count = 0; 

	for (int i=0; i<n; i++) 
	{ 
		count += m[k-arr[i]]; 
		if (k-arr[i] == arr[i]) 
			count--; 
	} 

	return count/2; 
} 


int main() 
{ 
	int n,k;
	cin>>n>>k; 
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout << "Count of pairs is "
		<< getPairsCount(arr, n, k); 
	return 0; 
} 

