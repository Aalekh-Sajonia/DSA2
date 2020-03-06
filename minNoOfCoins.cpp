#include<bits/stdc++.h>
using namespace std;
int calculate(vector<int> arr,int n,int amount)
{
	if(amount<0)
	{
		return -1;
	}
	if(amount == 0)
	{
		return 0;
	}
	
	int finalAns = INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i] <= amount)
		{
			int ansHere = 1 + calculate(arr,n,amount-arr[i]);
			
			if(ansHere>0 && ansHere < finalAns)
			{
				finalAns = ansHere;			
			}			
		}
	}
	if(finalAns == INT_MAX)
	{
		return -1;
	}
	return finalAns;
}

int main()
{
	int n;
	cin>>n;
	vector<int> vect;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		vect.push_back(a);
	}
	
	int amount;
	cin>>amount;
	cout<<calculate(vect,n,amount);
	
	return 0;
}
