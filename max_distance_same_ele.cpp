#include<bits/stdc++.h>
using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	int *arr = new int[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>arr[i];		
//	}
//	int count = 0;
//	int max_count=0;
//	for(int i=0;i<n;i++)
//	{
//		count = 0;
//		for(int j=i+1;j<n;j++)
//		{
//			if(arr[j] == arr[i])
//			{
//				count = (j-i);	
//			}		
//		}
//		if(max_count<count)
//		{
//			max_count = count;
//		}
//	}
//	cout<<max_count<<endl;
//	return 0;
//}

int count(int *arr ,int n)
{
	int maxDist = INT_MIN;
	unordered_map<int,int> myMap;
	for(int i=0;i<n;i++)
	{
		if(myMap.find(arr[i]) == myMap.end()) //first occurance hi store karna he
		{
			myMap[arr[i]] = i;
		}
		else
		{
			maxDist = max(maxDist,i-myMap[arr[i]]); // fir jaise hi aage aate jaega waise check karte jana he.
		}
	}
	return maxDist;
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
	cout<<count(arr,n);
	return 0;
}

