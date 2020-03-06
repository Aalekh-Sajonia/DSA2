#include<bits/stdc++.h>
using namespace std;
void helper(char **arr,int x,int y,char pre,char neww,int n,int m)
{
	if(x<0 || x>= n || y<0 || y>=m)
	{
		return ;
	}
	
	if(arr[x][y] != pre)
	{
		return ;
	}
	
	arr[x][y] = neww;
	helper(arr,x+1,y,pre,neww,n,m);
	helper(arr,x-1,y,pre,neww,n,m);
	helper(arr,x,y+1,pre,neww,n,m);
	helper(arr,x,y-1,pre,neww,n,m);
	
}
void solve(char **arr,int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j] == 'O')
			{
				arr[i][j] = '-';
			}
		}
	}
	
	for (int i=0; i<n; i++)   
	{
		if (arr[i][0] == '-') 
        	helper(arr, i, 0, '-', 'O',n,m); 
	}
      
   	for (int i=0; i<n; i++)  
   	{
      	if (arr[i][m-1] == '-') 
   			helper(arr, i, m-1, '-', 'O',n,m);
   	}
         
	for (int i=0; i<m; i++)   
	{
      	if (arr[0][i] == '-') 
        	helper(arr, 0, i, '-', 'O',n,m); 
	}
   	
	for (int i=0; i<m; i++)  
   	{
   		if (arr[n-1][i] == '-') 
        	helper(arr, n-1, i, '-', 'O',n,m); 
	}
 
   	for (int i=0; i<n; i++) 
   	{
	   for (int j=0; j<m; j++) 
	   {
	   		if (arr[i][j] == '-') 
            	arr[i][j] = 'X'; 
	   } 	
	}
    return ;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		char **arr = new char*[n];
		for(int i=0;i<n;i++)
		{
			arr[i] = new char[m];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>arr[i][j];
			}
		}
		solve(arr,n,m); 
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<arr[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
