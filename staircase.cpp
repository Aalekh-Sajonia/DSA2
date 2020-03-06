#include<bits/stdc++.h>
using namespace std;

int arr[1000];
int solution(int n)
{
	if(n==1 || n==0)
	{
		return 1;
	}
	if(arr[n]>0)
	{
		return arr[n];
	}
	int ans = solution(n-1) + solution(n-2);
	arr[n] = ans;
	return ans;
}

int main()
{
	int n;
	cin>>n;
	cout<<solution(n);
	return 0;
}
