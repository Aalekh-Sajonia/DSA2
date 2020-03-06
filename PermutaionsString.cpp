#include<bits/stdc++.h>
using namespace std;
unordered_set<string> myStr;
void permute(string str,int start,int end)
{
	if(start==end)
	{
		myStr.insert(str);
	}
	
	else
	{
		for(int i=start;i <= end;i++)
		{
			swap(str[i],str[start]);
			permute(str,start+1,end);
			swap(str[i],str[start]);
		}
	}
}

int main()
{
	string str;
	cin>>str;
	int end = str.size()-1;
	int start = 0;
	permute(str,0,end);
	unordered_set<string> :: iterator itr;
	itr = myStr.begin();
	while(itr!=myStr.end())
	{
		cout<<*itr<<" ";
		itr++;
	}
	cout<<endl;
	for(auto i : myStr)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	return 0;	
}
