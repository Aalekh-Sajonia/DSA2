#include<bits/stdc++.h>
using namespace std;

void print(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<arr[0];
	cout<<endl;
}

bool possible(int **adj,int n,int *store,int vertex,int current)
{
	if(adj[store[current-1]][vertex] == 0)
	{
		return false;
	}
	
	for(int i=0;i<current;i++)
	{
		if(store[i] == vertex)
		{
			return false;
		}
	}
	return true;
}

bool findCycle(int **adj,int n,int *store,int start)
{
	if(start == n)
	{
		if(adj[store[start-1]][store[0]] == 0)
		{
			return false;
		}
		return true;
	}
	
	for(int i=0;i<n;i++)
	{
		if(possible(adj,n,store,i,start))
		{
			store[start] = i;
			if(findCycle(adj,n,store,start+1))
			{
				print(store,n);
			}
			store[start] = -1;			
		}
	}
	return false;
}


void cycle(int **adj,int n)
{
	int *store = new int[n];
	for(int i=0;i<n;i++)
	{
		store[i] = -1;
	}
	
	for(int i=0;i<n;i++)
	{
		store[0] = i;
		findCycle(adj,n,store,1);
	}
	return ;
}

int main()
{
	int n;
	cin>>n;
	int **adj = new int*[n];
	for(int i=0;i<n;i++)
	{
		adj[i] = new int[n];
		for(int j=0;j<n;j++)
		{
			cin>>adj[i][j];
		}
	}
	cout<<endl;
	cycle(adj,n);
	return 0;
}
