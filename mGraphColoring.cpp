#include<bits/stdc++.h>
using namespace std;

void print(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
bool possible(int **adj,int n,int *color,int c,int vertex)
{
	for(int i=0;i<n;i++)
	{
		if(adj[vertex][i] && color[i] == c)
		{
			return false;
		}
	}
	return true;
}

void colors(int **adj,int n,int m,int *color,int initial)
{
	if(initial == n)
	{
		print(color,n);
		return ;
	}
	
	for(int i=1;i<=m;i++)
	{
		if(possible(adj,n,color,i,initial))
		{
			color[initial] = i;
			colors(adj,n,m,color,initial+1);
			color[initial] = 0;		
		}
	}
	return ;
}


void printAllColors(int **adj,int n,int m)
{
	int *color = new int[n]();
	
	colors(adj,n,m,color,0);

	return ;
}

int main()
{
	int n,m;
	cin>>n>>m;
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
	printAllColors(adj,n,m);
	
	return 0;
}
