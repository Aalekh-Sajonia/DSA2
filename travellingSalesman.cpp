#include<bits/stdc++.h>
using namespace std;

int BFS(vector<int> *edge,int n,int start,bool *visited,queue<int> q)
{
	vector<int> vect;
	q.push(start);
	visited[start] = true;
//	cout<<start<<" ";
	vect.push_back(start);
	vect.push_back(-1);
	while(!q.empty())
	{
		for(auto i = edge[q.front()].begin(); i != edge[q.front()].end(); i++)
		{
			if(visited[*i] == true)
			{
				continue;
			}
//			cout<<*i<<" ";
			q.push(*i);
			visited[*i] = true;
			vect.push_back(*i);
		}
		if(vect[vect.size()-1] != -1)
		{
			vect.push_back(-1);
		}
		q.pop();
	}
	int counter = 0;
	int flag = 0;
	for(auto x:vect)
	{
		if(x==n-1)
		{
			flag = 1;
			break;
		}
		if(x==-1)
		{
			counter++;
		}
//		cout<<x<<" ";
	}
	if(flag == 1)
	{
		return counter;
	}
	else
	{	
		return -1;
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> *edge = new vector<int>[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int a;
			cin>>a;
			edge[i].push_back(a-1);
		}
	}
	
	bool *visited = new bool[n]();
	
	queue<int> q;
	cout<<BFS(edge,n,0,visited,q);
		
	return 0;
}
