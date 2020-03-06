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
	vector<pair<int,int>> myvect;
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
			min = i;
			while(i<n)
			{
				if(arr[i]<arr[i+1])
					max = i+1;
				else
					break;
				i++;
			}
			myvect.push_back(make_pair(min,max));
		}
	}
	if(myvect.size()==0)
	{
		cout<<"null";
	}
	else
	{
		for(auto x:myvect)
		{
			cout<<x.first<<" "<<x.second<<endl;
		}
	}
	return 0;
}
