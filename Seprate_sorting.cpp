#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> even;
		vector<int> odd;
		int input;

		for(int i=0;i<n;i++)
		{
			cin>>input;
			if(input%2==0)
			{
				even.push_back(input);
			}
			else
			{
				odd.push_back(input);
			}
		}
		sort(even.begin(),even.end());
		sort(odd.begin(),odd.end(),greater<int>());
		for(auto itr: odd)
		{
			cout<<itr<<" ";
		}
		for(auto itr: even)
		{
			cout<<itr<<" ";
		}
		cout<<endl;
	}
	
	
}
