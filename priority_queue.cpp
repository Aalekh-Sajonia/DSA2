#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	priority_queue<int> pQueue;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		pQueue.push(a);
	}
	queue<int> queue;
	int t;
	cin>>t;
	while(t--)
	{
		int b;
		cin>>b;		
		int max = pQueue.top();
		int flag = 0;
		while(!pQueue.empty())
		{
			if(pQueue.top() == b)
			{
				flag = 1;
				break;
			}
			queue.push(pQueue.top());
			pQueue.pop();
		}
		if(flag)
		{
			cout<<"1"<<endl;
			cout<<max<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
		while(!queue.empty())
		{
			pQueue.push(queue.front());
			queue.pop();
		}
		if(flag)
		{
			pQueue.pop();
		}
	}

	return 0;
	
}

int main()
{
	int n;
	cin>>n;
	map<int,int> myMap;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		myMap[a]++;
	}
	
	int k;
	cin>>k;
	while(k--)
	{
		int b;
		cin>>b;
		if(myMap.find(b)!=myMap.end())
		{
			cout<<"1"<<endl;
			map<int,int> :: iterator itr = myMap.begin();
			cout<<itr->first<<endl;
			myMap.erase(itr->first);
		}
		else
		{
			cout<<"-1";
		}
	}
	
}
