#include<bits/stdc++.h>
using namespace std;

void DFS(vector<int> *adj,bool *visited,int n,int start)
{
	cout<<start<<" ";
	visited[start] = true;
	for(auto i = adj[start].begin(); i != adj[start].end(); i++ )
	{
		if(!visited[*i])
		{
			DFS(adj,visited,n,*i);
		}
	}
	return ;
}

int main()
{
	int n;
	cin>>n;
	int e;
	cin>>e;
	vector<int> *adj = new vector<int>[n];
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	bool *visited = new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i] = false;
	}
	
	DFS(adj,visited,n,0);
	
	return 0;
}
