#include<bits/stdc++.h>
using namespace std;

bool helper(vector<int> *edges,int n,bool *visited,bool *recArr,int start)
{
	visited[start] = true;
	recArr[start] = true;
	for(auto i = edges[start].begin() ; i!= edges[start].end(); i++)
	{
		if(visited[*i] == false)
		{
			if(helper(edges,n,visited,recArr,*i))
			{
				return true;
			}
		}
		else if(recArr[*i] == true)
		{
			return true;
		}
	}
	recArr[start] = false;
	return false;
}

bool findCycle(vector<int> *edges,int n)
{
	bool *visited = new bool[n]();
	bool *recArr = new bool[n]();

	for(int i=0;i<n;i++)
	{
		if(visited[i] == false)
		{
			if(helper(edges,n,visited,recArr,i))
			{
				return true;
			}
		}
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
	}
	cout<<findCycle(edges,n);
	return 0;
}
