#include<bits/stdc++.h>
using namespace std;

bool comparator(pair<int,int> a,pair<int,int> b)
{
	return a.second > b.second;
}

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
	sort(vect.begin(),vect.end(),comparator);
	for(auto x: vect)
	{
		cout<<x.first<<" "<<x.second<<" ";
	}
	cout<<endl;
	return 0;
}
