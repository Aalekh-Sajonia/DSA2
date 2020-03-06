#include<bits/stdc++.h>
using namespace std;

void printAllPath(int **arr,int r,int c,int sR,int sC,vector<int> temp)
{
	temp.push_back(arr[sR][sC]);

	if(r == sR && c == sC)  //base
	{
//		cout<<"here";
		for(auto x: temp)
		{
			cout<<x<<" ";
		}
		cout<<endl;
		return ;
	}
	
	if(sC+1 <= c) //base
		printAllPath(arr,r,c,sR,sC+1,temp);
	
	if(sR+1 <= r)  //base
		printAllPath(arr,r,c,sR+1,sC,temp);
	

//	temp.pop_back(); //not needed as passbyvalue it is
}

int main()
{
	int r,c;
	cin>>r>>c;
	int **arr = new int*[r];
	for(int i=0;i<r;i++)
	{
		arr[i] = new int[c];
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
//	
//	for(int i=0;i<r;i++)
//	{
//		for(int j=0;j<c;j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
	vector<int> temp;
	printAllPath(arr,r-1,c-1,0,0,temp);
	return 0;
}
