#include<bits/stdc++.h>
using namespace std;

bool helper(vector<int> *edges,int n,bool* visited,int start,int end)
{
	visited[start] = true;
	if(start==end)
	{
		return true;
	}
	
	for(auto i = edges[start].begin() ;i!=edges[start].end();i++)
	{
		if(visited[*i] == false)
		{
			if(helper(edges,n,visited,*i,end))
			{
				return true;
			}
		}
	}
	return false;
}

bool isReach(vector<int> *edges,int n)
{
	bool *visited = new bool[n]();
	
	if(helper(edges,n,visited,0,n-1))
	{
		return true;
	}
	return false;
}

int main()
{
	int n,e;
	cin>>n>>e;
	vector<int> *edges = new vector<int>[n];
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		edges[a].push_back(b);
		edges[b].push_back(a);		
	}
	cout<<isReach(edges,n);
	return 0;
}
