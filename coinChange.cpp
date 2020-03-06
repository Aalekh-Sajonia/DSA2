#include<bits/stdc++.h>
using namespace std;

int helper(vector<int> &coins,int amount,int noOfCoins)
{
	if(amount == 0)
	{
		return 1;	
	}	
	if(amount < 0)
	{
		return 0;
	}
	if(noOfCoins == 0)
	{
		return 0;
	}
	
	int select = helper(coins,amount-coins[noOfCoins-1],noOfCoins);
	coins.pop_back();
	int notSelect = helper(coins,amount,noOfCoins-1);
	return select + notSelect;
}

int coinChange(vector<int> &coins,int amount)
{
	int ans = helper(coins,amount,coins.size());
	return ans;	
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
	
	cout<<coinChange(vect,amount);	
	
	return 0;
}
