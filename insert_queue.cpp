#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,int> myMap;
	queue<int> myQueue;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		myQueue.push(a);
	}
	while(!myQueue.empty())
	{
		myMap[myQueue.front()]++;
		myQueue.pop();
	}
	int t;
	cin>>t;
	while(t--)
	{
		int temp;
		cin>>temp;
		if(myMap[temp]>0)
		{
			cout<<myMap[temp]<<" ";
		}
		else
		{
			cout<<"-1"<<" ";
		}
	}
	cout<<endl;
}
