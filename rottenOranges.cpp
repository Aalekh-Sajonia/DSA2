#include<bits/stdc++.h>
using namespace std;
struct oranges
{
	int x;
	int y;
};

int findCount(int **arr,int n,int m)
{
	int R[4] = {1,0,-1,0};
	int C[4] = {0,1,0,-1};
	queue<oranges> s;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==2)
			{
				oranges temp;
				temp.x = i;
				temp.y = j;
//				cout<<temp.x<<" "<<temp.y<<endl;
				s.push(temp);
			}
		}
	}
	int timeFrame = 1;
	while(!s.empty())
	{
		int size = s.size();
		while(size--)
		{
			oranges temp = s.front();
			s.pop();
			for(int i=0;i<4;i++)
			{
				int x = R[i] + temp.x;
				int y = C[i] + temp.y;
				if((x>=0 && x<n)  && (y>=0 && y<m) && arr[x][y] == 1)
				{
					arr[x][y] = 2;
					oranges save;
					save.x = x;
					save.y = y;
					s.push(save);
				} 
			}
		}
		int count = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(arr[i][j] == 1)
				{
					count++;
				}
			}
		}
		if(count!=0)
		{
			timeFrame++;
		}
		else
		{
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j] == 1)
			{
				return -1;
			}
		}
	}
	return timeFrame;
}

int main()
{
	int n,m;
	cin>>n>>m;
	int **arr = new int*[n];
	for(int i=0;i<n;i++)
	{ 
		arr[i] = new int[m];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<m;j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	cout<<findCount(arr,n,m);
	return 0;	
}
