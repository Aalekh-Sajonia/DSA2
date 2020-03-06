#include<bits/stdc++.h>
using namespace std;

int find(int start,int steps,int n)
{
	if(abs(start) > n)
	{
		return INT_MAX;
	}
	if(start == n)
	{
		return steps;
	}
	
	int right = find(start + steps + 1,steps+1,n);
	
	int left = find(start - steps -1, steps+1,n);
	
	return min(left,right);
	
}

//int find(int n)
//{
//	n = abs(n);
//	
//	int sum = 0;
//	int moves = 0;
//	while(sum<n || (sum-n)%2!=0)
//	{
//		moves++;
//		sum += moves;
//	}
//	return moves;
//}

int main()
{
	int n;
	cin>>n;
	n = abs(n);
	cout<<find(0,0,n);
	
	return 0;
}
