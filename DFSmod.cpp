#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> *vect,int n,bool *visited,int s)
{
	visited[s] = true;
	cout<<s<<" ";
	for(int i=0;i<vect[s].size();i++)
	{
		if(visited[vect[s][i]])
		{
			continue;
		}
		dfs(vect,n,visited,vect[s][i]);
	}
	return ;
}

int main()
{
	int n,e;
	cin>>n>>e;
	vector<int> *vect = new vector<int>[n];
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		vect[a].push_back(b);
	}
	
	bool *visited = new bool[n]();
	dfs(vect,n,visited,0);
	return 0;
}
