#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b)
{
	if(a.second == b.second)
	{
		return a.first > b.first;
	}
	else
	{
		return a.second > b.second;
	}
}

void kEle(int *arr,int n,int k)
{
	unordered_map<int,int> myMap;
	for(int i = 0;i<n;i++)
	{
		myMap[arr[i]]++;
	}
	
	vector<pair<int,int>> myVect(myMap.begin(),myMap.end());
	
	sort(myVect.begin(),myVect.end(),compare);
	
	for(int i=0;i<k;i++)
	{
		cout<<myVect[i].first<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	kEle(arr,n,k);
	return 0;
}
