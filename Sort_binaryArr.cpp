#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int input;
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>input;
			if(input == 0)
			{
			//	cout<<"enter";
				count++;
			}
		}
		for(int j=0;j<count;j++)
		{
			cout<<"0"<<" ";
		}
		for(int j=count;j<n;j++)
		{
			cout<<"1"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
