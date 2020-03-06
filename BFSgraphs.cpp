#include<bits/stdc++.h>
using namespace std;

void print(vector<int> *edges,int n,int start,bool *visited,queue<int> q)
{
	cout<<start<<" ";
	q.push(start);
	visited[start] = true;
	while(!q.empty())
	{
		for(auto i = edges[q.front()].begin(); i!= edges[q.front()].end(); i++)
		{
			if(visited[*i] == true)
			{
				continue;
			}
			q.push(*i);
			cout<<*i<<" ";
			visited[*i] = true;
		}
		q.pop();
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,e;
		cin>>n>>e;
		n++;
		e++;
		vector<int> *edges = new vector<int>[n];
		for(int i=0;i<e;i++)
		{
			int a,b;
			cin>>a>>b;
			edges[a].push_back(b);
			edges[b].push_back(a);
		}
		for(int i=0;i<n;i++)
		{
			sort(edges[i].begin(),edges[i].end());
		}
		bool *visited = new bool[n]();
		queue<int> q;
		for(int i=0;i<n;i++)
		{
			if(visited[i] == false)
			{
				print(edges,n,i,visited,q);
			}
		}
		cout<<endl;
	}

	return 0;
}
