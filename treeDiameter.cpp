#include<bits/stdc++.h>
using namespace std;
int x;

void dfs(int node,int count,int &maxCount,vector<int> *adj,bool *visited)
{
	visited[node] = true;
	count++;
	for(auto i = adj[node].begin();i!=adj[node].end();i++)
	{
		if(!visited[*i])
		{
			if(count>=maxCount)
			{
				maxCount = count;
				x = *i;
			}
			dfs(*i,count,maxCount,adj,visited);
		}
	}
}

int diameter(vector<int> *adj,int n)
{
	int maxCount = INT_MIN;
	bool *visited = new bool[n+1];
	for(int i=0;i<=n;i++)
	{
		visited[i] = false;
	}
	
	dfs(1,0,maxCount,adj,visited);
	for(int i=0;i<=n;i++)
	{
		visited[i] = false;
	}
	dfs(x,0,maxCount,adj,visited);
	
	return maxCount;
}

int main()
{
	int n;
	cin>>n;
	vector<int> *adj = new vector<int>[n+1];
	
	for(int i=0;i<n-1;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	cout<<diameter(adj,n);
	return 0;
}
