#include<bits/stdc++.h>
using namespace std;
int N;

bool isSafeVertical(int **arr,int row,int col)
{
	for(int i=0;i<row;i++)
	{
		if(arr[i][col] == 1)
		{
			return false;
		}
	}
	return true;
}

bool isSafeDiagonal(int **arr,int row,int col)
{
	for(int i=row,j=col; i>=0 && j>=0 ; i--,j--)
	{
		if(arr[i][j] == 1)
		{
			return false;
		}
	}
	
	for(int i=row,j=col;i>=0 && j<N;i--,j++)
	{
		if(arr[i][j] == 1)
		{
			return false;
		}
	}
	return true;
}

bool isSafe(int **arr,int row, int col)
{
	return(isSafeVertical(arr,row,col) && isSafeDiagonal(arr,row,col));
}	

void nQueen(int **arr,int row)
{
	if(row==N)
	{
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	for(int i=0;i<N;i++)
	{
		if(isSafe(arr,row,i))
		{
			arr[row][i] = 1;
			nQueen(arr,row+1);
			arr[row][i] = 0;
		}
	}
}

int main()
{
	cin>>N;
	int **arr = new int*[N];
	for(int i=0;i<N;i++)
	{
		arr[i] = new int[N];
		for(int j=0;j<N;j++)
		{
			arr[i][j] = 0;
		}
	}

	nQueen(arr,0);
	return 0;
}
