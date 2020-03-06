#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,int>> vect;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		vect.push_back(make_pair(a,b));
	}
	long long sum = 0;
	vector<pair<int,int>> :: iterator itr;
	for(itr = vect.begin(); itr!= vect.end(); itr++)
	{
		sum += itr->second;
	}
	
	cout<<sum<<endl;
}
