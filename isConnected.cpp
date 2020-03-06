#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> *edges,int n,bool *visited,int start)
{
	visited[start] = true;
	for(auto i = edges[start].begin(); i!=edges[start].end(); i++)
	{
		if(visited[*i] == false)
		{
			dfs(edges,n,visited,*i);
		}
	}
	return ;
}

bool isConnected(vector<int> *edges,int n)
{
	bool *visited = new bool[n]();
	
	dfs(edges,n,visited,0);
	
	for(int i=0;i<n;i++)
	{
		if(visited[i] == false)
		{
			return false;
		}
	}
	return true;
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
	cout<<isConnected(edges,n);	
	return 0;
}
