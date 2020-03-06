#include<bits/stdc++.h>
using namespace std;

int expo(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	if(b==1)
	{
		return a;
	}
	int n = expo(a,b/2);
	if(b%2==0)
	{
		return n*n;
	}
	else
	{
		return n*n*a;
	}
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<expo(a,b);
	return 0;
}
