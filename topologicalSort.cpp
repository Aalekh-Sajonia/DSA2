#include<bits/stdc++.h>
using namespace std;

void helper(int start,bool *visited,vector<int> *edges,int n,stack<int> &s)
{
	visited[start] = true;
	
	for(auto i = edges[start].begin(); i!=edges[start].end(); i++)
	{
		if(visited[*i] == false)
		{
			helper(*i,visited,edges,n,s);
		}
	}
	
	s.push(start);
}

void topologicalSort(vector<int> *edges,int n)
{
	stack<int> s;
	
	bool *visited = new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i] = false;
	}
	
	for(int i=0;i<n;i++)
	{
		if(visited[i] == false)
		{
			helper(i,visited,edges,n,s);
		}
	}
	
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

int main()
{
	int n;
	cin>>n;
	vector<int> *edges = new vector<int>[n];
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		edges[a].push_back(b);
	}
	
	topologicalSort(edges,n);	
	return 0;
}
