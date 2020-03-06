#include<bits/stdc++.h>
using namespace std;

void subsetSum(int *arr,int n,int sum,int start,vector<int> vect)
{
	if(sum == start)
	{
		for(auto x: vect)
		{
			cout<<x<<" ";
		}
		cout<<endl;
		return ;
	}
	
	if(n<0)
	{
		return ;
	}
	vect.push_back(arr[n]);
	subsetSum(arr,n-1,sum,start+arr[n],vect); //ek bar lenge
	vect.pop_back(); 
	subsetSum(arr,n-1,sum,start,vect); //dusri bar nahi lenge
	
}

int main()
{
	int n;
	cin>>n;
	int sum;
	cin>>sum;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int> vect;
	subsetSum(arr,n-1,sum,0,vect);
	return 0;
}
