#include<bits/stdc++.h>
using namespace std;

int count(vector<int> *vect,int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum += vect[i].size();
	}
	return sum;
}

int main()
{
	int n,e;
	cin>>n>>e;
	vector<int> *vect = new vector<int>[n];
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		vect[a].push_back(b);
	}
	cout<<count(vect,n);
	return 0;
}
